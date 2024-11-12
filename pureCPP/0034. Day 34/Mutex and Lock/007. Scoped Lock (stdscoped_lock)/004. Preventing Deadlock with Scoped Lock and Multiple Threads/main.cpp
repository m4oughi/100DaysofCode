#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtxA, mtxB;

void taskA() {
    std::scoped_lock lock(mtxA, mtxB); // Both locks acquired atomically
    std::cout << "Task A acquired both mtxA and mtxB.\n";
}

void taskB() {
    std::scoped_lock lock(mtxA, mtxB); // Consistent lock ordering prevents deadlock
    std::cout << "Task B acquired both mtxA and mtxB.\n";
}

int main() {
    std::thread t1(taskA);
    std::thread t2(taskB);

    t1.join();
    t2.join();
    return 0;
}
