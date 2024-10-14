#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::mutex poolMutex;
std::vector<int> sharedData;

void threadTask(int id) {
    std::lock_guard<std::mutex> lock(poolMutex); // Locks the poolMutex
    sharedData.push_back(id);  // Critical section: modify shared data
    std::cout << "Thread " << id << " added data to the pool." << std::endl;
    // Mutex is automatically unlocked when lock goes out of scope
}

int main() {
    const int numThreads = 5;
    std::vector<std::thread> threadPool;

    for (int i = 0; i < numThreads; ++i) {
        threadPool.emplace_back(threadTask, i);
    }

    for (auto& thread : threadPool) {
        thread.join();
    }

    std::cout << "Thread pool managed and mutexes handled using RAII." << std::endl;
    return 0;
}
