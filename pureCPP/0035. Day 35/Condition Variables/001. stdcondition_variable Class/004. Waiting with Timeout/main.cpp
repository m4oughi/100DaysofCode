#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool dataReady = false;

void waitForData() {
    std::unique_lock<std::mutex> lock(mtx);
    if (cv.wait_for(lock, std::chrono::seconds(3), [] { return dataReady; })) {
        std::cout << "Data is ready.\n";
    } else {
        std::cout << "Timeout! Data not ready.\n";
    }
}

void prepareData() {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate work
    {
        std::lock_guard<std::mutex> lock(mtx);
        dataReady = true;
    }
    cv.notify_one(); // Notify waiting thread
}

int main() {
    std::thread t1(waitForData);
    std::thread t2(prepareData);

    t1.join();
    t2.join();
    return 0;
}
