#include <iostream>
#include <thread>
#include <vector>

int sharedValue = 0;

void increment() {
    for (int i = 0; i < 10000; ++i) {
        ++sharedValue;  // Race condition
    }
}

int main() {
    const int numThreads = 10;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(increment);
    }

    for (auto& t : threads) {
        t.join();
    }

    std::cout << "Final sharedValue: " << sharedValue << std::endl;
    return 0;
}
