#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    auto timeout = std::chrono::system_clock::now() + std::chrono::seconds(2);
    if (cv.wait_until(lock, timeout, [] { return ready; })) {
        std::cout << "Worker proceeding - condition met within timeout.\n";
    } else {
        std::cout << "Worker timeout - condition not met in time.\n";
    }
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();

    t.join();
    return 0;
}
