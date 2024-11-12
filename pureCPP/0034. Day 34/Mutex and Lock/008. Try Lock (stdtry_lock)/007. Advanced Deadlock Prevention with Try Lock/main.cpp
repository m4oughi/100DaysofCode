#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtxA, mtxB;

void taskA() {
    while (true) {
        if (std::try_lock(mtxA, mtxB) == -1) { // Attempts to lock both mutexes without blocking
            std::cout << "Task A acquired both locks and is working.\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
            mtxA.unlock();
            mtxB.unlock();
            break;
        }
        std::cout << "Task A retrying.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

void taskB() {
    while (true) {
        if (std::try_lock(mtxA, mtxB) == -1) { // Attempts to lock both mutexes without blocking
            std::cout << "Task B acquired both locks and is working.\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Simulate work
            mtxA.unlock();
            mtxB.unlock();
            break;
        }
        std::cout << "Task B retrying.\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

int main() {
    std::thread t1(taskA);
    std::thread t2(taskB);

    t1.join();
    t2.join();

    return 0;
}
