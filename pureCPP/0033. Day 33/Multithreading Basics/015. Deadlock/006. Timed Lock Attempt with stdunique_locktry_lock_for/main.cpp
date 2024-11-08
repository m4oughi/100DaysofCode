#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx;

void threadFunc(int id) {
    std::unique_lock<std::mutex> lock(mtx, std::try_to_lock);  // Attempt to lock
    if (lock.owns_lock()) {
        std::cout << "Thread " << id << " acquired the lock." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    } else {
        std::cout << "Thread " << id << " could not acquire the lock." << std::endl;
    }
}

int main() {
    std::thread t1(threadFunc, 1);
    std::thread t2(threadFunc, 2);

    t1.join();
    t2.join();

    return 0;
}
