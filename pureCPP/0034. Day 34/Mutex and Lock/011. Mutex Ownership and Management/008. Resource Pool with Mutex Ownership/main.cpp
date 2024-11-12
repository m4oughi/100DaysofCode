#include <iostream>
#include <mutex>
#include <queue>
#include <thread>
#include <vector>

std::mutex poolMutex;
std::queue<int> resourcePool;

void resourceWorker(int id) {
    while (true) {
        std::unique_lock<std::mutex> ul(poolMutex, std::defer_lock); // Defer lock acquisition

        if (ul.try_lock()) { // Try locking the pool
            if (resourcePool.empty()) break;

            int resource = resourcePool.front();
            resourcePool.pop();
            std::cout << "Worker " << id << " processing resource " << resource << "\n";

            ul.unlock(); // Unlock for other workers
            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
        }
    }
}

int main() {
    for (int i = 1; i <= 10; ++i) resourcePool.push(i);

    std::vector<std::thread> workers;
    for (int i = 1; i <= 3; ++i) workers.emplace_back(resourceWorker, i);

    for (auto& worker : workers) worker.join();

    return 0;
}
