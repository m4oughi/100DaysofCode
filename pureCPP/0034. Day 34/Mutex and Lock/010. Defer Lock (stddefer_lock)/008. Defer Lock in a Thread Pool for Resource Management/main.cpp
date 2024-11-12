#include <iostream>
#include <mutex>
#include <thread>
#include <queue>
#include <vector>
#include <chrono>

std::mutex taskMutex;
std::queue<int> tasks;

void worker(int id) {
    while (true) {
        std::unique_lock<std::mutex> ul(taskMutex, std::defer_lock); // Defer locking

        if (ul.try_lock()) { // Try to lock when available
            if (tasks.empty()) break;

            int task = tasks.front();
            tasks.pop();
            std::cout << "Worker " << id << " processing task " << task << "\n";

            // Unlock here to allow other threads access
            ul.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
        }
    }
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        tasks.push(i);
    }

    std::vector<std::thread> workers;
    for (int i = 1; i <= 3; ++i) {
        workers.emplace_back(worker, i);
    }

    for (auto& worker : workers) {
        worker.join();
    }

    return 0;
}
