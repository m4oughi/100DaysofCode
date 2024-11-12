#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool dataReady = false;

void tryProcessData() {
    auto deadline = std::chrono::system_clock::now() + std::chrono::seconds(6);
    int attempts = 0;

    std::unique_lock<std::mutex> lock(mtx);
    while (std::chrono::system_clock::now() < deadline) {
        if (cv.wait_until(lock, std::chrono::system_clock::now() + std::chrono::seconds(2), [] { return dataReady; })) {
            std::cout << "Data processed successfully after " << attempts + 1 << " attempt(s).\n";
            return;
        }
        std::cout << "Attempt " << ++attempts << ": Data not ready, retrying...\n";
    }
    std::cout << "Failed to process data within deadline.\n";
}

void prepareData() {
    std::this_thread::sleep_for(std::chrono::seconds(4)); // Simulate data preparation time
    {
        std::lock_guard<std::mutex> lock(mtx);
        dataReady = true;
    }
    cv.notify_one();
}

int main() {
    std::thread processor(tryProcessData);
    std::thread preparer(prepareData);

    processor.join();
    preparer.join();
    return 0;
}
