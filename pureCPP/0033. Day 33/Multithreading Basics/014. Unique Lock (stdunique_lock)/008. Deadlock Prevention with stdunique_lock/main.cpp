#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;

void avoidDeadlock(int id) {
    std::unique_lock<std::mutex> lock1(mtx1, std::defer_lock);  // Defer locking
    std::unique_lock<std::mutex> lock2(mtx2, std::defer_lock);  // Defer locking

    std::lock(lock1, lock2);  // Lock both mutexes without deadlock
    std::cout << "Thread " << id << " acquired both locks." << std::endl;
}

int main() {
    std::thread t1(avoidDeadlock, 1);
    std::thread t2(avoidDeadlock, 2);

    t1.join();
    t2.join();

    return 0;
}
