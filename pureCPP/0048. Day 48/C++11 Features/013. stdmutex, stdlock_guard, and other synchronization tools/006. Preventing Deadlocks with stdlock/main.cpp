#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void safeTask1() {
    std::lock(mtx1, mtx2); // Lock both at once
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);
    std::cout << "Safe Task 1 completed\n";
}

void safeTask2() {
    std::lock(mtx1, mtx2);
    std::lock_guard<std::mutex> lock1(mtx1, std::adopt_lock);
    std::lock_guard<std::mutex> lock2(mtx2, std::adopt_lock);
    std::cout << "Safe Task 2 completed\n";
}

int main() {
    std::thread t1(safeTask1);
    std::thread t2(safeTask2);

    t1.join();
    t2.join();

    return 0;
}
