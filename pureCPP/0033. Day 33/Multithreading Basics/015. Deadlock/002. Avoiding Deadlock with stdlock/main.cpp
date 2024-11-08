#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1;
std::mutex mtx2;

void thread1() {
    std::lock(mtx1, mtx2);  // Lock both mutexes at once to avoid deadlock
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);  // Adopt already locked mutex
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);  // Adopt already locked mutex
    std::cout << "Thread 1 acquired both locks safely." << std::endl;
}

void thread2() {
    std::lock(mtx1, mtx2);  // Lock both mutexes at once to avoid deadlock
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);  // Adopt already locked mutex
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);  // Adopt already locked mutex
    std::cout << "Thread 2 acquired both locks safely." << std::endl;
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}
