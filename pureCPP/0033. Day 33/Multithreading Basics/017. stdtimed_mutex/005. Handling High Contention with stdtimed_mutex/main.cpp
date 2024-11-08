#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex mtx;

void highContentionTask(int thread_id) {
    if (mtx.try_lock_for(std::chrono::milliseconds(500))) {  // Try locking for half a second
        std::cout << "Thread " << thread_id << " acquired the lock!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate task
        mtx.unlock();
    } else {
        std::cout << "Thread " << thread_id << " could not acquire the lock in time." << std::endl;
    }
}

int main() {
    std::thread t1(highContentionTask, 1);
    std::thread t2(highContentionTask, 2);
    std::thread t3(highContentionTask, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
