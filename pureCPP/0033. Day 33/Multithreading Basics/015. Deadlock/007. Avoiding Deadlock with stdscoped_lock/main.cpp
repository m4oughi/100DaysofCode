#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void thread1() {
    std::scoped_lock lock(mtx1, mtx2);  // Scoped lock prevents deadlock
    std::cout << "Thread 1 acquired both locks with scoped_lock." << std::endl;
}

void thread2() {
    std::scoped_lock lock(mtx1, mtx2);  // Scoped lock prevents deadlock
    std::cout << "Thread 2 acquired both locks with scoped_lock." << std::endl;
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}
