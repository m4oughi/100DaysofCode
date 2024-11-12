#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>
#include <vector>
#include <functional>

std::condition_variable cv;
std::mutex mtx;
std::queue<std::function<void()>> taskQueue;
bool shutdown = false;

void worker() {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !taskQueue.empty() || shutdown; });
        
        if (shutdown && taskQueue.empty()) break;
        
        auto task = taskQueue.front();
        taskQueue.pop();
        lock.unlock();  // Unlock before running the task
        task();
    }
}

void submitTask(const std::function<void()>& task) {
    {
        std::lock_guard<std::mutex> lock(mtx);
        taskQueue.push(task);
    }
    cv.notify_one();
}

int main() {
    std::vector<std::thread> workers;
    for (int i = 0; i < 3; ++i) {
        workers.emplace_back(worker);
    }

    for (int i = 0; i < 5; ++i) {
        submitTask([i] { std::cout << "Task " << i << " executed.\n"; });
    }

    std::this_thread::sleep_for(std::chrono::seconds(2));

    {
        std::lock_guard<std::mutex> lock(mtx);
        shutdown = true;
    }
    cv.notify_all();

    for (auto& t : workers) {
        t.join();
    }
    return 0;
}
