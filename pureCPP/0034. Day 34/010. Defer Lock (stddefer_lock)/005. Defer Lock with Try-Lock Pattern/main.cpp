#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void tryLockWithDeferLock() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking

    if (ul.try_lock()) { // Attempt to lock without blocking
        std::cout << "Mutex locked with try_lock.\n";
    } else {
        std::cout << "Failed to acquire lock.\n";
    }
}

int main() {
    tryLockWithDeferLock();
    return 0;
}
