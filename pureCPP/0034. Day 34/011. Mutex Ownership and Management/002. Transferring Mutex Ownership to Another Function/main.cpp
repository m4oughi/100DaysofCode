#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void processWithLock(std::unique_lock<std::mutex> ul) {
    std::cout << "Ownership of mutex transferred to processWithLock.\n";
}

void transferOwnership() {
    std::unique_lock<std::mutex> ul(mtx); // Acquire lock and own mutex
    processWithLock(std::move(ul)); // Transfer ownership
}

int main() {
    transferOwnership();
    return 0;
}
