#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx;

void timedDeferLock() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking

    if (ul.try_lock_for(std::chrono::milliseconds(100))) { // Attempt to lock for 100ms
        std::cout << "Mutex locked within timeout.\n";
    } else {
        std::cout << "Timeout, lock not acquired.\n";
    }
}

int main() {
    timedDeferLock();
    return 0;
}
