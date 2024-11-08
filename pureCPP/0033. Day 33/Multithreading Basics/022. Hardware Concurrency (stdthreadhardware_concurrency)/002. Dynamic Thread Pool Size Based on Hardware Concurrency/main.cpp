#include <iostream>
#include <thread>
#include <vector>

void workerFunction(int id) {
    std::cout << "Thread " << id << " is working..." << std::endl;
}

int main() {
    unsigned int numThreads = std::thread::hardware_concurrency();
    std::cout << "Creating a thread pool with " << numThreads << " threads." << std::endl;

    std::vector<std::thread> threads;
    for (unsigned int i = 0; i < numThreads; ++i) {
        threads.emplace_back(workerFunction, i + 1);
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
