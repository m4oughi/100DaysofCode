#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void waitForResource(int id) {
    std::unique_lock<std::mutex> ul(mtx); // Acquire ownership with unique_lock
    cv.wait(ul, [] { return ready; }); // Wait until the resource is ready

    std::cout << "Thread " << id << " proceeding after resource ready.\n";
}

void makeResourceReady() {
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Simulate work
    {
        std::lock_guard<std::mutex> lg(mtx); // Lock and signal readiness
        ready = true;
    }
    cv.notify_all(); // Notify all waiting threads
}

int main() {
    std::thread t1(waitForResource, 1);
    std::thread t2(waitForResource, 2);
    std::thread t3(makeResourceReady);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
