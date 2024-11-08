#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex resource_mtx;

void accessResource(int thread_id, int wait_time) {
    if (resource_mtx.try_lock_for(std::chrono::seconds(wait_time))) {
        std::cout << "Thread " << thread_id << " acquired the resource lock!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate using the resource
        resource_mtx.unlock();
        std::cout << "Thread " << thread_id << " released the resource lock!" << std::endl;
    } else {
        std::cout << "Thread " << thread_id << " timed out waiting for the resource!" << std::endl;
    }
}

int main() {
    std::thread t1(accessResource, 1, 3);  // Will try to lock for 3 seconds
    std::thread t2(accessResource, 2, 1);  // Will try to lock for 1 second

    t1.join();
    t2.join();

    return 0;
}
