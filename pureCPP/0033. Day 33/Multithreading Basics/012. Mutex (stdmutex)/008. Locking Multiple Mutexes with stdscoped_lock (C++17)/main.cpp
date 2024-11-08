#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void task1() {
    std::scoped_lock lock(mtx1, mtx2);  // Locks both mutexes safely
    std::cout << "Task 1 is working...\n";
}

void task2() {
    std::scoped_lock lock(mtx1, mtx2);  // Locks both mutexes safely
    std::cout << "Task 2 is working...\n";
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    t1.join();
    t2.join();

    return 0;
}
