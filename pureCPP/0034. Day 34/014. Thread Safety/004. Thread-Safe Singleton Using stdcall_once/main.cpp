#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> atomicCounter(0);

void incrementAtomicCounter() {
    ++atomicCounter; // Thread-safe without explicit locks
}

int main() {
    std::thread t1(incrementAtomicCounter);
    std::thread t2(incrementAtomicCounter);

    t1.join();
    t2.join();

    std::cout << "Atomic Counter: " << atomicCounter << "\n";
    return 0;
}
