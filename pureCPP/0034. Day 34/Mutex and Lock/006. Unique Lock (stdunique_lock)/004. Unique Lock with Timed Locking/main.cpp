#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx;

void timedProcessTask(int id) {
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock); // Defer lock
    if (lock.try_lock_for(std::chrono::milliseconds(100))) { // Try to lock for 100 ms
        std::cout << "Thread " << id << " acquired lock.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Simulate work
    } else {
        std::cout << "Thread " << id << " timed out.\n";
    }
}

int main() {
    std::thread t1(timedProcessTask, 1);
    std::thread t2(timedProcessTask, 2);

    t1.join();
    t2.join();
    return 0;
}
