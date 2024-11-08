#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void deferredLock(int id) {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock);  // Defer locking
    std::cout << "Thread " << id << " is ready to lock..." << std::endl;
    lock.lock();  // Manually lock when needed
    std::cout << "Thread " << id << " has locked the mutex." << std::endl;
}

int main() {
    std::thread t1(deferredLock, 1);
    std::thread t2(deferredLock, 2);

    t1.join();
    t2.join();

    return 0;
}
