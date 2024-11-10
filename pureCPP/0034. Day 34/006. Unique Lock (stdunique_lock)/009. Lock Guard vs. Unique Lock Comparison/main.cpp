#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void taskWithLockGuard() {
    std::lock_guard<std::mutex> guard(mtx); // Simpler but less flexible
    std::cout << "Processing with lock_guard.\n";
}

void taskWithUniqueLock() {
    std::unique_lock<std::mutex> uniqueLock(mtx); // More flexible
    std::cout << "Processing with unique_lock.\n";
    uniqueLock.unlock(); // Can manually unlock
    std::cout << "Unique lock manually unlocked.\n";
}

int main() {
    std::thread t1(taskWithLockGuard);
    std::thread t2(taskWithUniqueLock);

    t1.join();
    t2.join();
    return 0;
}
