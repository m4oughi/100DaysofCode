#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex mtx;

void taskWithTimeout(int id) {
    if (mtx.try_lock_for(std::chrono::milliseconds(100))) { // Attempts to lock for 100 ms
        std::cout << "Thread " << id << " acquired lock.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Simulate work
        mtx.unlock();
    } else {
        std::cout << "Thread " << id << " timed out.\n";
    }
}

int main() {
    std::thread t1(taskWithTimeout, 1);
    std::thread t2(taskWithTimeout, 2);

    t1.join();
    t2.join();

    return 0;
}
