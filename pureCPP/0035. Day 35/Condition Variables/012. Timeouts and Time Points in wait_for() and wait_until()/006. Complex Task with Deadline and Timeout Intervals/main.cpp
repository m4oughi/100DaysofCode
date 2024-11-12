#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool taskComplete = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(10);
    
    while (!taskComplete && std::chrono::steady_clock::now() < deadline) {
        if (cv.wait_for(lock, std::chrono::seconds(2)) == std::cv_status::timeout) {
            std::cout << "Worker checking progress...\n";
        }
    }
    if (taskComplete) {
        std::cout << "Worker finished task.\n";
    } else {
        std::cout << "Worker failed to complete task before deadline.\n";
    }
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(5));
    {
        std::lock_guard<std::mutex> lock(mtx);
        taskComplete = true;
    }
    cv.notify_one();

    t.join();
    return 0;
}
