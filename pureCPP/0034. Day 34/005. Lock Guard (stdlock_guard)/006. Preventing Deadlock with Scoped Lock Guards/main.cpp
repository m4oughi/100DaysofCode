#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtxA, mtxB;

void taskA() {
    std::lock_guard<std::mutex> lock1(mtxA); // Acquire mtxA first
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    std::lock_guard<std::mutex> lock2(mtxB); // Then acquire mtxB
    std::cout << "Task A completed\n";
}

void taskB() {
    std::lock_guard<std::mutex> lock1(mtxA); // Consistent order
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    std::lock_guard<std::mutex> lock2(mtxB);
    std::cout << "Task B completed\n";
}

int main() {
    std::thread t1(taskA);
    std::thread t2(taskB);

    t1.join();
    t2.join();
    return 0;
}
