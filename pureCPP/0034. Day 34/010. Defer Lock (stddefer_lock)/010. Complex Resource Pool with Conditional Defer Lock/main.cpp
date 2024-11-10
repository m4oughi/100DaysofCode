#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
#include <queue>

std::mutex mtx;
std::queue<int> resourcePool;

void accessResourcePool(int id) {
    while (true) {
        std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking

        if (ul.try_lock()) { // Attempt to lock the pool
            if (resourcePool.empty()) break;

            int resource = resourcePool.front();
            resourcePool.pop();
            std::cout << "Thread " << id << " using resource " << resource << "\n";

            ul.unlock(); // Unlock for other threads to access the pool
            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate usage
        }
    }
}

int main() {
    for (int i = 1; i <= 10; ++i) {
        resourcePool.push(i);
    }

    std::vector<std::thread> threads;
    for (int i = 1; i <= 3; ++i) {
        threads.emplace_back(accessResourcePool, i);
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
