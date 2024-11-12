#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>
#include <queue>
#include <functional>

std::condition_variable cv;
std::mutex mtx;
std::queue<std::function<void()>> taskQueue;
bool done = false;

void worker(int id) {
    while (true) {
        std::function<void()> task;
        {
            std::unique_lock<std::mutex> lock(mtx);
            cv.wait(lock, [] { return !taskQueue.empty() || done; });
            if (done && taskQueue.empty()) break;
            task = std::move(taskQueue.front());
            taskQueue.pop();
        }
        std::cout << "Worker " << id << " executing task.\n";
        task();
        cv.notify_one(); // Notify other threads that a task slot is available
    }
}

void addTask(std::function<void()> task) {
    {
        std::lock_guard<std::mutex> lock(mtx);
        taskQueue.push(std::move(task));
    }
    cv.notify_one(); // Notify a worker thread to handle the new task
}

int main() {
    std::vector<std::thread> workers;
    for (int i = 1; i <= 3; ++i) {
        workers.emplace_back(worker, i);
    }

    for (int i = 1; i <= 5; ++i) {
        addTask([i] { std::cout << "Processing task " << i << "\n"; });
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    {
        std::lock_guard<std::mutex> lock(mtx);
        done = true;
    }
    cv.notify_all();

    for (auto& t : workers) {
        t.join();
    }
    return 0;
}
