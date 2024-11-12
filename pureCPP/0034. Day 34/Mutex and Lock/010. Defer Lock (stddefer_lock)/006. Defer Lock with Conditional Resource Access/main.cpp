#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void waitForResource() {
    std::unique_lock<std::mutex> ul(mtx, std::defer_lock); // Defer locking

    cv.wait(ul, [] { return ready; }); // Lock only when ready is true
    std::cout << "Resource is ready, lock acquired.\n";
}

void setResource() {
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Simulate work
    std::lock_guard<std::mutex> lg(mtx);
    ready = true;
    cv.notify_one();
}

int main() {
    std::thread t1(waitForResource);
    std::thread t2(setResource);

    t1.join();
    t2.join();

    return 0;
}
