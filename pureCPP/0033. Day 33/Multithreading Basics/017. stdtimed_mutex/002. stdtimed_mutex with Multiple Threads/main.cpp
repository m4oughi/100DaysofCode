#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex t_mtx;

void worker(int thread_id, int wait_time) {
    if (t_mtx.try_lock_for(std::chrono::seconds(wait_time))) {
        std::cout << "Thread " << thread_id << " acquired the lock after waiting " << wait_time << " seconds" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate work
        t_mtx.unlock();
    } else {
        std::cout << "Thread " << thread_id << " timed out waiting for the lock" << std::endl;
    }
}

int main() {
    std::thread t1(worker, 1, 1);  // Will wait 1 second
    std::thread t2(worker, 2, 3);  // Will wait 3 seconds

    t1.join();
    t2.join();

    return 0;
}
