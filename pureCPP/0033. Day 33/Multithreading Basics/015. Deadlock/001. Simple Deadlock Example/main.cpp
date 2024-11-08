#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1;
std::mutex mtx2;

void thread1() {
    std::lock_guard<std::mutex> lock1(mtx1);  // Lock mtx1 first
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
    std::lock_guard<std::mutex> lock2(mtx2);  // Try to lock mtx2, leading to deadlock
    std::cout << "Thread 1 acquired both locks." << std::endl;
}

void thread2() {
    std::lock_guard<std::mutex> lock2(mtx2);  // Lock mtx2 first
    std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
    std::lock_guard<std::mutex> lock1(mtx1);  // Try to lock mtx1, leading to deadlock
    std::cout << "Thread 2 acquired both locks." << std::endl;
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}
