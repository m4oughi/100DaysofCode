#include <iostream>
#include <shared_mutex>
#include <thread>
#include <chrono>

std::shared_timed_mutex mtx1, mtx2;

void task1() {
    std::unique_lock<std::shared_timed_mutex> lock1(mtx1, std::defer_lock);
    std::unique_lock<std::shared_timed_mutex> lock2(mtx2, std::defer_lock);
    
    std::lock(lock1, lock2); // Avoids deadlock
    std::cout << "Task 1 acquired both locks.\n";
}

void task2() {
    std::unique_lock<std::shared_timed_mutex> lock1(mtx1, std::defer_lock);
    std::unique_lock<std::shared_timed_mutex> lock2(mtx2, std::defer_lock);

    std::lock(lock1, lock2); // Avoids deadlock
    std::cout << "Task 2 acquired both locks.\n";
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    t1.join();
    t2.join();

    return 0;
}
