#include <iostream>
#include <atomic>
#include <thread>

std::atomic_flag spinlock = ATOMIC_FLAG_INIT;

void criticalSection(int id) {
    while (spinlock.test_and_set(std::memory_order_acquire)); // Acquire lock (spinlock)
    std::cout << "Thread " << id << " is in the critical section.\n";
    spinlock.clear(std::memory_order_release); // Release lock
}

int main() {
    std::thread t1(criticalSection, 1);
    std::thread t2(criticalSection, 2);

    t1.join();
    t2.join();

    return 0;
}
