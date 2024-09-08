#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> counter(0); // Atomic counter

void increment() {
    for (int i = 0; i < 1000; ++i) {
        ++counter; // Thread-safe increment operation
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final counter value: " << counter.load() << std::endl; // Should be 2000 if thread-safe
}
