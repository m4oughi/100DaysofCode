#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx;

void tryProcessTask(int id) {
    std::unique_lock<std::mutex> lock(mtx, std::try_to_lock); // Try to lock
    if (lock.owns_lock()) { // Check if lock was successfully acquired
        std::cout << "Thread " << id << " processing inside lock.\n";
    } else {
        std::cout << "Thread " << id << " could not acquire lock.\n";
    }
}

int main() {
    std::thread t1(tryProcessTask, 1);
    std::thread t2(tryProcessTask, 2);

    t1.join();
    t2.join();
    return 0;
}
