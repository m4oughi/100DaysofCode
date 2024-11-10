#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx;

void timedMutexOwnership() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer lock acquisition

    if (ul.try_lock_for(std::chrono::milliseconds(100))) { // Try to lock with timeout
        std::cout << "Mutex locked within timeout.\n";
    } else {
        std::cout << "Failed to acquire lock within timeout.\n";
    }
}

int main() {
    timedMutexOwnership();
    return 0;
}
