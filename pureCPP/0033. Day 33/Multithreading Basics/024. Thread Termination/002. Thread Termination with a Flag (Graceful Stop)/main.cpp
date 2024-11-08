#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

std::atomic<bool> stopFlag(false);

void flagBasedTask() {
    while (!stopFlag) {
        std::cout << "Thread is running..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    std::cout << "Thread has been signaled to stop." << std::endl;
}

int main() {
    std::thread t(flagBasedTask);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    stopFlag = true;  // Signal the thread to stop
    t.join();

    std::cout << "Thread has completed gracefully." << std::endl;

    return 0;
}
