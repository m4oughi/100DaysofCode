#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void waitForReady() {
    std::unique_lock<std::mutex> lock(mtx); // Locks the mutex
    cv.wait(lock, [] { return ready; });    // Waits until ready becomes true
    std::cout << "Thread " << std::this_thread::get_id() << " proceeded." << std::endl;
    // Mutex is automatically released when lock goes out of scope
}

void signalReady() {
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Simulate work
    std::lock_guard<std::mutex> lock(mtx); // Locks the mutex
    ready = true;
    std::cout << "Ready signal sent by thread " << std::this_thread::get_id() << "." << std::endl;
    cv.notify_all(); // Notifies waiting threads
}

int main() {
    std::thread t1(waitForReady);
    std::thread t2(waitForReady);
    std::thread t3(signalReady);

    t1.join();
    t2.join();
    t3.join();

    std::cout << "Mutex and condition variable managed with RAII." << std::endl;
    return 0;
}
