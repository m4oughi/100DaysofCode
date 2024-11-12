#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>
#include <vector>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
std::queue<int> taskQueue;
bool done = false;

void worker(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !taskQueue.empty() || done; });
        
        if (done && taskQueue.empty()) break;
        
        int task = taskQueue.front();
        taskQueue.pop();
        std::cout << "Worker " << id << " processed task " << task << "\n";
        cv.notify_all();  // Notify all waiting threads that a task slot is available
    }
}

void producer() {
    for (int i = 1; i <= 5; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        {
            std::lock_guard<std::mutex> lock(mtx);
            taskQueue.push(i);
            std::cout << "Produced task " << i << "\n";
        }
        cv.notify_all();  // Notify all waiting workers of a new task
    }
    {
        std::lock_guard<std::mutex> lock(mtx);
        done = true;
    }
    cv.notify_all();  // Notify all workers to exit once done
}

int main() {
    std::vector<std::thread> workers;
    for (int i = 1; i <= 3; ++i) {
        workers.emplace_back(worker, i);
    }

    std::thread prod(producer);

    for (auto& worker : workers) {
        worker.join();
    }
    prod.join();
    return 0;
}
