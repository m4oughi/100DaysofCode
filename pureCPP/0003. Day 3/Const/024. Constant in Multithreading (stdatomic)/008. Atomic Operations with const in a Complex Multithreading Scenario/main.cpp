#include <iostream>
#include <atomic>
#include <thread>
#include <vector>

std::atomic<int> counter(0);

void increment(int times) {
    for (int i = 0; i < times; ++i) {
        ++counter;
    }
}

void decrement(int times) {
    for (int i = 0; i < times; ++i) {
        --counter;
    }
}

int main() {
    const int iterations = 1000;
    std::vector<std::thread> threads;

    // Launch threads for incrementing and decrementing
    for (int i = 0; i < 5; ++i) {
        threads.emplace_back(increment, iterations);
        threads.emplace_back(decrement, iterations);
    }

    // Wait for all threads to complete
    for (auto& t : threads) {
        t.join();
    }

    std::cout << "Final counter value: " << counter.load() << std::endl; // Should be 0 if thread-safe
}
