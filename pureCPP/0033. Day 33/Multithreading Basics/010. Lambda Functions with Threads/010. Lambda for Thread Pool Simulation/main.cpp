#include <iostream>
#include <thread>
#include <vector>

int main() {
    const int numThreads = 4;
    std::vector<std::thread> threadPool;

    for (int i = 0; i < numThreads; ++i) {
        threadPool.emplace_back([i]() {
            std::cout << "Thread " << i << " is working" << std::endl;
        });
    }

    for (auto& t : threadPool) {
        t.join();
    }

    return 0;
}
