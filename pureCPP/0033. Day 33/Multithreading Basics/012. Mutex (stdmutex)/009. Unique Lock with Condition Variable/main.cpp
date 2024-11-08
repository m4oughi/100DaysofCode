#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void printNumber(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });  // Wait until ready is true
    std::cout << "Thread " << id << " is running\n";
}

void setReady() {
    std::lock_guard<std::mutex> lock(mtx);
    ready = true;
    cv.notify_all();  // Notify all waiting threads
}

int main() {
    std::thread t1(printNumber, 1);
    std::thread t2(printNumber, 2);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    setReady();

    t1.join();
    t2.join();

    return 0;
}
