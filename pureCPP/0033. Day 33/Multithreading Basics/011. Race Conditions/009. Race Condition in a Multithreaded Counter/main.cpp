#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> counter(0);

void count() {
    for (int i = 0; i < 10000; ++i) {
        counter++;  // Atomic counter, race condition avoided
    }
}

int main() {
    const int numThreads = 10;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(count);
    }

    for (auto& t : threads) {
        t.join();
    }

    std::cout << "Final counter value: " << counter << std::endl;
    return 0;
}
