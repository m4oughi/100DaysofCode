#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool stopCountdown = false;

void countdown(int seconds) {
    std::unique_lock<std::mutex> lock(mtx);
    for (int i = seconds; i > 0; --i) {
        if (cv.wait_for(lock, std::chrono::seconds(1), [] { return stopCountdown; })) {
            std::cout << "Countdown stopped early!\n";
            return;
        }
        std::cout << "Time left: " << i << " seconds\n";
    }
    std::cout << "Countdown finished!\n";
}

int main() {
    std::thread t(countdown, 5);

    std::this_thread::sleep_for(std::chrono::seconds(2));
    {
        std::lock_guard<std::mutex> lock(mtx);
        stopCountdown = true;
    }
    cv.notify_one();

    t.join();
    return 0;
}
