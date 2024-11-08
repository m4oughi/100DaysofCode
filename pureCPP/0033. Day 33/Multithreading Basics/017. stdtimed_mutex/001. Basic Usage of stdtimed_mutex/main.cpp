#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex t_mtx;

void attemptLock(int thread_id) {
    if (t_mtx.try_lock_for(std::chrono::seconds(2))) {
        std::cout << "Thread " << thread_id << " acquired the lock!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
        t_mtx.unlock();
    } else {
        std::cout << "Thread " << thread_id << " could not acquire the lock!" << std::endl;
    }
}

int main() {
    std::thread t1(attemptLock, 1);
    std::thread t2(attemptLock, 2);

    t1.join();
    t2.join();

    return 0;
}
