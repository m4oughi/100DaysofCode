#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex resource1;
std::timed_mutex resource2;

void coordinateResources(int thread_id, int wait_time) {
    if (resource1.try_lock_for(std::chrono::seconds(wait_time))) {
        std::cout << "Thread " << thread_id << " locked resource 1" << std::endl;

        if (resource2.try_lock_for(std::chrono::seconds(wait_time))) {
            std::cout << "Thread " << thread_id << " locked resource 2" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate task
            resource2.unlock();
        } else {
            std::cout << "Thread " << thread_id << " could not lock resource 2" << std::endl;
        }
        resource1.unlock();
    } else {
        std::cout << "Thread " << thread_id << " could not lock resource 1" << std::endl;
    }
}

int main() {
    std::thread t1(coordinateResources, 1, 2);
    std::thread t2(coordinateResources, 2, 3);

    t1.join();
    t2.join();

    return 0;
}
