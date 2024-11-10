#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx1, mtx2;

void multipleMutexOwnership() {
    std::unique_lock<std::mutex> ul1(mtx1, std::defer_lock); // Deferred lock for mtx1
    std::unique_lock<std::mutex> ul2(mtx2, std::defer_lock); // Deferred lock for mtx2

    std::lock(ul1, ul2); // Lock both mutexes at once to avoid deadlock
    std::cout << "Both mutexes locked and owned.\n";
}

int main() {
    multipleMutexOwnership();
    return 0;
}
