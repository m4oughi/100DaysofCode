#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void processWithLock(std::unique_lock<std::mutex> lock) {
    if (lock.owns_lock()) {
        std::cout << "Processing with lock in function.\n";
    }
}

int main() {
    std::unique_lock<std::mutex> lock(mtx); // Acquire lock in main
    processWithLock(std::move(lock)); // Transfer ownership
    if (!lock.owns_lock()) {
        std::cout << "Lock ownership transferred.\n";
    }
    return 0;
}
