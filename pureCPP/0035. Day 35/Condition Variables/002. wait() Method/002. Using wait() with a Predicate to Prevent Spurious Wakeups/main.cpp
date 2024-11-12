#include <iostream>
#include <thread>
#include <condition_variable>

std::condition_variable cv;
std::mutex mtx;
int data = 0;

void consumer() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return data > 0; }); // Wait until data is available
    std::cout << "Data received: " << data << "\n";
}

void producer() {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate work
    {
        std::lock_guard<std::mutex> lock(mtx);
        data = 42;
    }
    cv.notify_one(); // Notify the waiting thread
}

int main() {
    std::thread t1(consumer);
    std::thread t2(producer);

    t1.join();
    t2.join();
    return 0;
}
