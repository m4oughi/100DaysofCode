#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void task1() {
    std::lock_guard<std::mutex> lock1(mtx1);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock2(mtx2); // Potential deadlock
    std::cout << "Task 1 completed\n";
}

void task2() {
    std::lock_guard<std::mutex> lock2(mtx2);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock1(mtx1); // Potential deadlock
    std::cout << "Task 2 completed\n";
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    t1.join();
    t2.join();

    return 0;
}
