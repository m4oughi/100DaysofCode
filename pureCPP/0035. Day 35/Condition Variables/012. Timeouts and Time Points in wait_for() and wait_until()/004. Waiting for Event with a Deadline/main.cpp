#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(5);
    
    while (!ready && std::chrono::steady_clock::now() < deadline) {
        cv.wait_until(lock, deadline);
    }

    if (ready) {
        std::cout << "Worker proceeding after notification.\n";
    } else {
        std::cout << "Worker timed out waiting for condition.\n";
    }
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(6));  // Delay past the deadline
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();

    t.join();
    return 0;
}
