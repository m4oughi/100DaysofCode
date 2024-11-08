#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::timed_mutex mtx;

void task() {
    while (!mtx.try_lock_for(std::chrono::milliseconds(100))) {
        std::cout << "Waiting to acquire lock...\n";
    }
    std::cout << "Lock acquired\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    mtx.unlock();
}

int main() {
    std::thread t1(task);
    std::thread t2(task);

    t1.join();
    t2.join();

    return 0;
}
