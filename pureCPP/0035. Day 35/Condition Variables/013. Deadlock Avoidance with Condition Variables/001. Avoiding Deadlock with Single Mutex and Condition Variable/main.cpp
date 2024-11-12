#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>

std::condition_variable cv;
std::mutex mtx;
bool taskReady = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);  // Only one mutex to lock, no deadlock risk
    cv.wait(lock, [] { return taskReady; });  // Wait until taskReady is true
    std::cout << "Worker proceeding with task.\n";
}

void prepareTask() {
    {
        std::lock_guard<std::mutex> lock(mtx);
        taskReady = true;
        std::cout << "Task prepared.\n";
    }
    cv.notify_one();  // Notify worker
}

int main() {
    std::thread t1(worker);
    std::thread t2(prepareTask);

    t1.join();
    t2.join();
    return 0;
}
