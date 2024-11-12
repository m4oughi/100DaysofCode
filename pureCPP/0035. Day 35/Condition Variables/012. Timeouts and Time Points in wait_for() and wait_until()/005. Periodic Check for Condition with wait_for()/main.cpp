#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
bool ready = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    while (!ready) {
        if (cv.wait_for(lock, std::chrono::milliseconds(500)) == std::cv_status::timeout) {
            std::cout << "Worker polling...\n";
        }
    }
    std::cout << "Worker proceeding after condition met.\n";
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(3));
    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_all();

    t.join();
    return 0;
}
