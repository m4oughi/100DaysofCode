#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtxA, mtxB;

void taskA() {
    std::unique_lock<std::mutex> lockA(mtxA, std::defer_lock);
    std::unique_lock<std::mutex> lockB(mtxB, std::defer_lock);

    std::lock(lockA, lockB); // Locks both mutexes atomically

    std::cout << "Task A acquired both locks.\n";
}

void taskB() {
    std::unique_lock<std::mutex> lockA(mtxA, std::defer_lock);
    std::unique_lock<std::mutex> lockB(mtxB, std::defer_lock);

    std::lock(lockA, lockB); // Locks both mutexes atomically

    std::cout << "Task B acquired both locks.\n";
}

int main() {
    std::thread t1(taskA);
    std::thread t2(taskB);

    t1.join();
    t2.join();
    return 0;
}
