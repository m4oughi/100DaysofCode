#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1;
std::mutex mtx2;

void thread1() {
    if (std::try_lock(mtx1, mtx2) == -1) {  // Try to lock both mutexes
        std::cout << "Thread 1 successfully locked both mtx1 and mtx2" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        mtx1.unlock();
        mtx2.unlock();
    } else {
        std::cout << "Thread 1 could not lock both mutexes" << std::endl;
    }
}

void thread2() {
    if (std::try_lock(mtx1, mtx2) == -1) {  // Try to lock both mutexes
        std::cout << "Thread 2 successfully locked both mtx1 and mtx2" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        mtx1.unlock();
        mtx2.unlock();
    } else {
        std::cout << "Thread 2 could not lock both mutexes" << std::endl;
    }
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}
