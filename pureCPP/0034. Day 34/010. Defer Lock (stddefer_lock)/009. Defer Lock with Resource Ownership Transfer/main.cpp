#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void transferOwnership(std::unique_lock<std::mutex> ul) {
    std::cout << "Ownership of the lock transferred.\n";
    if (ul.owns_lock()) {
        std::cout << "Lock is held in transfer function.\n";
    }
}

void ownershipDeferLock() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking

    ul.lock(); // Lock the mutex
    transferOwnership(std::move(ul)); // Transfer ownership to another function

    if (!ul.owns_lock()) {
        std::cout << "Lock ownership has been transferred, no longer owns lock.\n";
    }
}

int main() {
    ownershipDeferLock();
    return 0;
}
