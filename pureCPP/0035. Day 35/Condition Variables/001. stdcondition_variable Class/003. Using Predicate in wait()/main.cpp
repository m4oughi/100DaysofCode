#include <iostream>
#include <thread>
#include <condition_variable>

std::condition_variable cv;
std::mutex mtx;
int count = 0;

void increment() {
    std::unique_lock<std::mutex> lock(mtx);
    count++;
    std::cout << "Incremented count to " << count << "\n";
    cv.notify_all(); // Notify any waiting threads
}

void waitForThreshold(int threshold) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [&] { return count >= threshold; });
    std::cout << "Reached threshold: " << count << "\n";
}

int main() {
    std::thread t1(waitForThreshold, 3);

    for (int i = 0; i < 3; ++i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        increment();
    }

    t1.join();
    return 0;
}
