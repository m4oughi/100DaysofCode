#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex mtx;

void tryToLockWithFallback(int thread_id) {
    if (mtx.try_lock_for(std::chrono::seconds(2))) {
        std::cout << "Thread " << thread_id << " acquired the lock, performing main task..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
        mtx.unlock();
    } else {
        std::cout << "Thread " << thread_id << " could not acquire the lock, performing fallback task..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate fallback task
    }
}

int main() {
    std::thread t1(tryToLockWithFallback, 1);
    std::thread t2(tryToLockWithFallback, 2);
    std::thread t3(tryToLockWithFallback, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
