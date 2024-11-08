#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex t_mtx;

void attemptLockUntil(int thread_id, int seconds) {
    auto future_time = std::chrono::steady_clock::now() + std::chrono::seconds(seconds);
    if (t_mtx.try_lock_until(future_time)) {
        std::cout << "Thread " << thread_id << " acquired the lock until time point" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate work
        t_mtx.unlock();
    } else {
        std::cout << "Thread " << thread_id << " failed to acquire the lock before time point" << std::endl;
    }
}

int main() {
    std::thread t1(attemptLockUntil, 1, 2);  // Will attempt to lock for 2 seconds
    std::thread t2(attemptLockUntil, 2, 4);  // Will attempt to lock for 4 seconds

    t1.join();
    t2.join();

    return 0;
}
