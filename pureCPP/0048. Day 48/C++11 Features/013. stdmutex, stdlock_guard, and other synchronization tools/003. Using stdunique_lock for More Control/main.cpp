#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void task(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Thread " << id << " acquired the lock.\n";
    lock.unlock(); // Unlocking explicitly
    std::cout << "Thread " << id << " released the lock.\n";
}

int main() {
    std::thread t1(task, 1);
    std::thread t2(task, 2);

    t1.join();
    t2.join();

    return 0;
}
