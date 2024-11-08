#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void tryLockExample(int id) {
    std::unique_lock<std::mutex> lock(mtx, std::try_to_lock);  // Try to lock the mutex
    if (lock.owns_lock()) {
        std::cout << "Thread " << id << " acquired the lock." << std::endl;
    } else {
        std::cout << "Thread " << id << " could not acquire the lock." << std::endl;
    }
}

int main() {
    std::thread t1(tryLockExample, 1);
    std::thread t2(tryLockExample, 2);

    t1.join();
    t2.join();

    return 0;
}
