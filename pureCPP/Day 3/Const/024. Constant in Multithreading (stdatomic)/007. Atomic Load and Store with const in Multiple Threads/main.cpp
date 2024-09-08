#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> sharedValue(50);

void storeValue() {
    sharedValue.store(100, std::memory_order_relaxed); // Store operation
}

void loadValue() {
    std::cout << "Loaded value: " << sharedValue.load(std::memory_order_relaxed) << std::endl; // Load operation
}

int main() {
    std::thread t1(storeValue);
    std::thread t2(loadValue);

    t1.join();
    t2.join();

    return 0;
}
