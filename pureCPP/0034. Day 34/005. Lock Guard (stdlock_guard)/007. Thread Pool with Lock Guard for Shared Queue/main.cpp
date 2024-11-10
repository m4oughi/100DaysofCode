#include <iostream>
#include <thread>
#include <mutex>
#include <queue>
#include <vector>
#include <functional>
#include <condition_variable>

std::mutex mtx;
std::queue<int> taskQueue;
std::condition_variable cv;
bool done = false;

void worker(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !taskQueue.empty() || done; });

        if (done && taskQueue.empty()) return;

        int task = taskQueue.front();
        taskQueue.pop();
        lock.unlock();

        std::cout << "Thread " << id << " processing task " << task << "\n";
    }
}

void addTask(int task) {
    std::lock_guard<std::mutex> lock(mtx); // Protects queue access
    taskQueue.push(task);
    cv.notify_one();
}

int main() {
    std::vector<std::thread> workers;

    for (int i = 0; i < 3; ++i) {
        workers.emplace_back(worker, i + 1);
    }

    for (int i = 1; i <= 10; ++i) {
        addTask(i);
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
