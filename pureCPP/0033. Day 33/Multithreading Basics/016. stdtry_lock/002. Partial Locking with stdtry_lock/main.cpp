#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2, mtx3;

void thread1() {
    int result = std::try_lock(mtx1, mtx2, mtx3);  // Try to lock three mutexes
    if (result == -1) {
        std::cout << "Thread 1 locked all three mutexes." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        mtx1.unlock();
        mtx2.unlock();
        mtx3.unlock();
    } else {
        std::cout << "Thread 1 could not lock mutex at index: " << result << std::endl;
    }
}

void thread2() {
    int result = std::try_lock(mtx1, mtx2, mtx3);  // Try to lock three mutexes
    if (result == -1) {
        std::cout << "Thread 2 locked all three mutexes." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        mtx1.unlock();
        mtx2.unlock();
        mtx3.unlock();
    } else {
        std::cout << "Thread 2 could not lock mutex at index: " << result << std::endl;
    }
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}
