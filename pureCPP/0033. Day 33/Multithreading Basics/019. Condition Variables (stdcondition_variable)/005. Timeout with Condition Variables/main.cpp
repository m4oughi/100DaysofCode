#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <chrono>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void taskWithTimeout() {
    std::unique_lock<std::mutex> lock(mtx);
    if (cv.wait_for(lock, std::chrono::seconds(2), [] { return ready; })) {
        std::cout << "Received signal within timeout." << std::endl;
    } else {
        std::cout << "Timeout expired, proceeding without signal." << std::endl;
    }
}

void signal() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::lock_guard<std::mutex> lock(mtx);
    ready = true;
    cv.notify_one();
}

int main() {
    std::thread t1(taskWithTimeout);
    std::thread t2(signal);

    t1.join();
    t2.join();

    return 0;
}
