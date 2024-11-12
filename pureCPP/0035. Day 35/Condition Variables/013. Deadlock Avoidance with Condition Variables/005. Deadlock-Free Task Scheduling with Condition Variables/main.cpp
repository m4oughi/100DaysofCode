#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <atomic>

std::condition_variable cv;
std::mutex mtx;
std::atomic<bool> task1_done(false), task2_done(false);

void task1() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return task2_done.load(); });  // Wait for task 2 to finish
    std::cout << "Task 1 proceeding after Task 2 is done.\n";
}

void task2() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return task1_done.load(); });  // Wait for task 1 to finish
    std::cout << "Task 2 proceeding after Task 1 is done.\n";
}

void coordinator() {
    {
        std::lock_guard<std::mutex> lock(mtx);
        task1_done = true;
        task2_done = true;
    }
    cv.notify_all();  // Notify all waiting threads to avoid deadlock
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);
    std::thread t3(coordinator);

    t1.join();
    t2.join();
    t3.join();
    return 0;
}
