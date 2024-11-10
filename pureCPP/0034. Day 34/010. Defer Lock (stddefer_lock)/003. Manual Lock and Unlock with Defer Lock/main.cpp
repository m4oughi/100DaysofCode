#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void manualLockUnlock() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking

    ul.lock();
    std::cout << "Mutex locked manually.\n";
    ul.unlock();
    std::cout << "Mutex unlocked manually.\n";

    ul.lock(); // Lock again if needed
    std::cout << "Mutex locked again.\n";
}

int main() {
    manualLockUnlock();
    return 0;
}
