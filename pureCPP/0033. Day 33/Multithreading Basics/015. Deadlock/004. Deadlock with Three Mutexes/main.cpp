#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2, mtx3;

void thread1() {
    std::lock_guard<std::mutex> lock1(mtx1);  // Lock mtx1
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
    std::lock_guard<std::mutex> lock2(mtx2);  // Lock mtx2
    std::lock_guard<std::mutex> lock3(mtx3);  // Lock mtx3
    std::cout << "Thread 1 acquired all locks." << std::endl;
}

void thread2() {
    std::lock_guard<std::mutex> lock2(mtx2);  // Lock mtx2
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
    std::lock_guard<std::mutex> lock3(mtx3);  // Lock mtx3
    std::lock_guard<std::mutex> lock1(mtx1);  // Lock mtx1
    std::cout << "Thread 2 acquired all locks." << std::endl;
}

void thread3() {
    std::lock_guard<std::mutex> lock3(mtx3);  // Lock mtx3
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
    std::lock_guard<std::mutex> lock1(mtx1);  // Lock mtx1
    std::lock_guard<std::mutex> lock2(mtx2);  // Lock mtx2
    std::cout << "Thread 3 acquired all locks." << std::endl;
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);
    std::thread t3(thread3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}