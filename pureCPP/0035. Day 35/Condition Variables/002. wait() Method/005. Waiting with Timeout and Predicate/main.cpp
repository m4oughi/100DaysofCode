#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool taskDone = false;

void doWork() {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate work
    {
        std::lock_guard<std::mutex> lock(mtx);
        taskDone = true;
    }
    cv.notify_one();
}

void waitForTaskWithTimeout() {
    std::unique_lock<std::mutex> lock(mtx);
    if (cv.wait_for(lock, std::chrono::seconds(3), [] { return taskDone; })) {
        std::cout << "Task completed in time.\n";
    } else {
        std::cout << "Timeout! Task not completed.\n";
    }
}

int main() {
    std::thread worker(doWork);
    std::thread waiter(waitForTaskWithTimeout);

    worker.join();
    waiter.join();
    return 0;
}
