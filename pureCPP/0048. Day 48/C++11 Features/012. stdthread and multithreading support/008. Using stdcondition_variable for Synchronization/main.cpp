#include <iostream>
#include <thread>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void worker() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });

    std::cout << "Worker thread is running.\n";
}

int main() {
    std::thread t(worker);

    std::this_thread::sleep_for(std::chrono::seconds(1)); // Simulate work

    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();

    t.join();

    return 0;
}
