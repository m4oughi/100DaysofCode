#include <iostream>
#include <memory>
#include <thread>
#include <mutex>

std::mutex mtx;

void increment(std::shared_ptr<int> ptr) {
    std::lock_guard<std::mutex> lock(mtx);  // Ensure thread-safe modification
    (*ptr)++;
    std::cout << "Incremented value: " << *ptr << std::endl;
}

int main() {
    auto sharedPtr = std::make_shared<int>(0);

    std::thread t1(increment, sharedPtr);
    std::thread t2(increment, sharedPtr);

    t1.join();
    t2.join();

    std::cout << "Final value: " << *sharedPtr << std::endl;

    return 0;
}
