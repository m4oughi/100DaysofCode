#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void tryLockTask(int id) {
    if (mtx.try_lock()) { // Attempts to lock without blocking
        std::cout << "Thread " << id << " acquired lock and is working.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
        mtx.unlock(); // Releases lock after work
    } else {
        std::cout << "Thread " << id << " could not acquire lock.\n";
    }
}

int main() {
    std::thread t1(tryLockTask, 1);
    std::thread t2(tryLockTask, 2);

    t1.join();
    t2.join();
    return 0;
}
