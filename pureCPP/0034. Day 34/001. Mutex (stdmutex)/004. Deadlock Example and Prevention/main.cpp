#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1;
std::mutex mtx2;

void threadFunc1() {
    std::lock(mtx1, mtx2);                  // Acquire both locks without deadlock
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);
    std::cout << "Thread 1 acquired both locks\n";
}

void threadFunc2() {
    std::lock(mtx1, mtx2);                  // Acquire both locks without deadlock
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);
    std::cout << "Thread 2 acquired both locks\n";
}

int main() {
    std::thread t1(threadFunc1);
    std::thread t2(threadFunc2);

    t1.join();
    t2.join();
    return 0;
}
