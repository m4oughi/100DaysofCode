#include <iostream>
#include <atomic>
#include <thread>

std::atomic_flag lock = ATOMIC_FLAG_INIT; // Atomic flag initialization

void threadFunction() {
    while (lock.test_and_set(std::memory_order_acquire)); // Spinlock

    std::cout << "Critical section in thread" << std::endl;

    lock.clear(std::memory_order_release); // Release lock
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);

    t1.join();
    t2.join();

    return 0;
}
