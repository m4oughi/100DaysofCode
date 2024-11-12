#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;
int attempts = 0;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    while (!ready && attempts < 5) {
        if (cv.wait_for(lock, std::chrono::seconds(1)) == std::cv_status::timeout) {
            std::cout << "Attempt " << ++attempts << ": Still waiting...\n";
        }
    }

    if (ready) {
        std::cout << "Condition met after " << attempts << " attempts.\n";
    } else {
        std::cout << "Timeout reached with no condition met.\n";
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
