#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx;

void tryLockExample(int id) {
    if (mtx.try_lock()) { // Try to acquire lock
        std::cout << "Thread " << id << " acquired lock\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        mtx.unlock();
    } else {
        std::cout << "Thread " << id << " could not acquire lock\n";
    }
}

int main() {
    std::thread t1(tryLockExample, 1);
    std::thread t2(tryLockExample, 2);

    t1.join();
    t2.join();
    return 0;
}
