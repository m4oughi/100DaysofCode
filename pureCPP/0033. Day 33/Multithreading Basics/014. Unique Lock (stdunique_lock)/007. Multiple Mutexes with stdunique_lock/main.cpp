#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void lockMultipleMutexes() {
    std::unique_lock<std::mutex> lock1(mtx1, std::defer_lock);  // Defer locking
    std::unique_lock<std::mutex> lock2(mtx2, std::defer_lock);  // Defer locking

    std::lock(lock1, lock2);  // Lock both mutexes at once
    std::cout << "Locked both mutexes." << std::endl;
}

int main() {
    std::thread t1(lockMultipleMutexes);
    std::thread t2(lockMultipleMutexes);

    t1.join();
    t2.join();

    return 0;
}
