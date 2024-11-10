#include <iostream>
#include <mutex>
#include <chrono>
#include <thread>

std::timed_mutex t_mtx;

void timedLockFunction() {
    std::unique_lock<std::timed_mutex> lock(t_mtx, std::defer_lock); // Defer locking initially
    if (lock.try_lock_for(std::chrono::milliseconds(100))) {
        std::cout << "Timed lock acquired within 100ms\n";
    } else {
        std::cout << "Failed to acquire timed lock within 100ms\n";
    }
    // Lock will be automatically released if it was acquired
}

int main() {
    std::thread t1(timedLockFunction);
    std::thread t2(timedLockFunction);

    t1.join();
    t2.join();
    return 0;
}
