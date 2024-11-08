#include <iostream>
#include <thread>
#include <vector>
#include <queue>
#include <mutex>
#include <condition_variable>

std::mutex queueMutex;
std::condition_variable cv;
std::queue<int> tasks;

void worker(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(queueMutex);
        cv.wait(lock, [] { return !tasks.empty(); });

        if (tasks.empty()) break;
        int task = tasks.front();
        tasks.pop();
        lock.unlock();

        std::cout << "Thread " << id << " processing task " << task << std::endl;
    }
}

int main() {
    unsigned int numThreads = std::thread::hardware_concurrency();
    std::vector<std::thread> threadPool;

    for (unsigned int i = 0; i < numThreads; ++i) {
        threadPool.emplace_back(worker, i + 1);
    }

    {
        std::lock_guard<std::mutex> lock(queueMutex);
        for (int i = 1; i <= 50; ++i) {
            tasks.push(i);
        }
    }
    cv.notify_all();

    for (auto& t : threadPool) {
        t.join();
    }

    return 0;
}
