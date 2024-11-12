#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;
int attempt = 0;

void worker() {
    auto deadline = std::chrono::system_clock::now() + std::chrono::seconds(5);
    std::unique_lock<std::mutex> lock(mtx);

    while (std::chrono::system_clock::now() < deadline && !ready) {
        if (cv.wait_until(lock, std::chrono::system_clock::now() + std::chrono::seconds(1)) == std::cv_status::timeout) {
            std::cout << "Attempt " << ++attempt << ": Still waiting...\n";
        }
    }

    if (ready) {
        std::cout << "Worker proceeding after " << attempt << " attempts.\n";
    } else {
        std::cout << "Worker timeout - deadline reached.\n";
    }
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(3));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();

    t.join();
    return 0;
}
