#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx1, mtx2;
bool taskDone = false;

void task1() {
    std::unique_lock<std::mutex> lock1(mtx1, std::defer_lock);
    std::unique_lock<std::mutex> lock2(mtx2, std::defer_lock);

    // Lock with timeout to avoid deadlock
    if (lock1.try_lock_for(std::chrono::seconds(2))) {
        std::cout << "Task 1 acquired first mutex.\n";
        if (lock2.try_lock_for(std::chrono::seconds(2))) {
            std::cout << "Task 1 acquired second mutex. Working...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            taskDone = true;
            cv.notify_all();
        }
    } else {
        std::cout << "Task 1 timed out waiting for mutex.\n";
    }
}

void task2() {
    std::unique_lock<std::mutex> lock1(mtx2, std::defer_lock);
    std::unique_lock<std::mutex> lock2(mtx1, std::defer_lock);

    if (lock1.try_lock_for(std::chrono::seconds(2))) {
        std::cout << "Task 2 acquired first mutex.\n";
        if (lock2.try_lock_for(std::chrono::seconds(2))) {
            std::cout << "Task 2 acquired second mutex. Working...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    } else {
        std::cout << "Task 2 timed out waiting for mutex.\n";
    }
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    t1.join();
    t2.join();
    return 0;
}
