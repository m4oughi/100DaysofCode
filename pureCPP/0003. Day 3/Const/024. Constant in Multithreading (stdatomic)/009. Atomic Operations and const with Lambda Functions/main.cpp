#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> atomicValue(60);

void modifyValue(const std::function<void()>& func) {
    func();
}

int main() {
    auto lambda = []() {
        atomicValue.fetch_add(10); // Atomic add operation
    };

    std::thread t1(modifyValue, lambda);
    std::thread t2(modifyValue, lambda);

    t1.join();
    t2.join();

    std::cout << "Final atomic value: " << atomicValue.load() << std::endl; // Should be 80 if thread-safe
}
