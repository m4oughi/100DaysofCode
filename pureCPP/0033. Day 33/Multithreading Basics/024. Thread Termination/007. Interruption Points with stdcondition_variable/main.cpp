#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>
#include <mutex>

std::mutex mtx;
std::condition_variable cv;
bool stopFlag = false;

void interruptionPointTask() {
    std::unique_lock<std::mutex> lock(mtx);
    while (!stopFlag) {
        std::cout << "Thread is working..." << std::endl;
        cv.wait_for(lock, std::chrono::milliseconds(200));  // Interruption point
    }
    std::cout << "Thread is stopping after interruption." << std::endl;
}

int main() {
    std::thread t(interruptionPointTask);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lock(mtx);
        stopFlag = true;
    }
    cv.notify_all();  // Notify thread to exit
    t.join();

    std::cout << "Thread has been terminated after notification." << std::endl;

    return 0;
}
