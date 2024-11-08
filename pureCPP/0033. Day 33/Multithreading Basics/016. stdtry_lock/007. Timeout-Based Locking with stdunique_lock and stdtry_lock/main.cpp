#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex timed_mtx;

void timedTryLock(int id) {
    std::unique_lock<std::timed_mutex> lock(timed_mtx, std::try_to_lock);  // Try to acquire the lock
    if (lock.owns_lock()) {
        std::cout << "Thread " << id << " acquired the lock." << std::endl;
    } else {
        std::cout << "Thread " << id << " could not acquire the lock." << std::endl;
    }
}

int main() {
    std::thread t1(timedTryLock, 1);
    std::thread t2(timedTryLock, 2);

    t1.join();
    t2.join();

    return 0;
}
