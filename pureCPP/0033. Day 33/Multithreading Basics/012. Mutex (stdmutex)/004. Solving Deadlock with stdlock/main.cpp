#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void task1() {
    std::lock(mtx1, mtx2);  // Lock both mutexes simultaneously
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);  // Adopt the locked mutex
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);  // Adopt the locked mutex
    std::cout << "Task 1 completed\n";
}

void task2() {
    std::lock(mtx1, mtx2);  // Lock both mutexes simultaneously
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);  // Adopt the locked mutex
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);  // Adopt the locked mutex
    std::cout << "Task 2 completed\n";
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    t1.join();
    t2.join();

    return 0;
}
