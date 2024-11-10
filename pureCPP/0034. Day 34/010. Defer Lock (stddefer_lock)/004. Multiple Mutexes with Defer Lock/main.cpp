#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx1, mtx2;

void deferMultipleLocks() {
    std::unique_lock<std::mutex> ul1(mtx1, std::defer_lock); // Defer locking on mtx1
    std::unique_lock<std::mutex> ul2(mtx2, std::defer_lock); // Defer locking on mtx2

    std::lock(ul1, ul2); // Lock both mutexes together to avoid deadlock

    std::cout << "Both mutexes are locked.\n";
}

int main() {
    deferMultipleLocks();
    return 0;
}
