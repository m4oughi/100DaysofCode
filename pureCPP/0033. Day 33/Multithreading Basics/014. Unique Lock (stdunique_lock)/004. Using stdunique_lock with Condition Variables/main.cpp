#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void waitForSignal() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });  // Wait for condition
    std::cout << "Thread received the signal!" << std::endl;
}

void sendSignal() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::unique_lock<std::mutex> lock(mtx);
    ready = true;
    cv.notify_one();  // Notify waiting thread
}

int main() {
    std::thread t1(waitForSignal);
    std::thread t2(sendSignal);

    t1.join();
    t2.join();

    return 0;
}
