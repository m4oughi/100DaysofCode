#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void uniqueLockExample() {
    std::unique_lock<std::mutex> lock(mtx);  // Manually lock the mutex
    std::cout << "Thread using unique_lock." << std::endl;
    lock.unlock();  // Manually unlock
    std::cout << "Thread using unique_lock after unlocking." << std::endl;
}

void lockGuardExample() {
    std::lock_guard<std::mutex> lock(mtx);  // Automatically lock and unlock
    std::cout << "Thread using lock_guard." << std::endl;
}

int main() {
    std::thread t1(uniqueLockExample);
    std::thread t2(lockGuardExample);

    t1.join();
    t2.join();

    return 0;
}
