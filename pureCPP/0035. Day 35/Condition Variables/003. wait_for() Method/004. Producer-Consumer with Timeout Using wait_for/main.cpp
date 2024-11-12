#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>
#include <chrono>

std::condition_variable cv;
std::mutex mtx;
std::queue<int> buffer;
const int maxBufferSize = 5;

void producer() {
    int data = 1;
    while (data <= 10) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait_for(lock, std::chrono::seconds(1), [] { return buffer.size() < maxBufferSize; });
        
        if (buffer.size() < maxBufferSize) {
            buffer.push(data);
            std::cout << "Produced: " << data++ << "\n";
            cv.notify_all();
        }
    }
}

void consumer() {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        if (cv.wait_for(lock, std::chrono::seconds(2), [] { return !buffer.empty(); })) {
            int item = buffer.front();
            buffer.pop();
            std::cout << "Consumed: " << item << "\n";
            cv.notify_all();
        } else {
            std::cout << "Consumer timed out waiting for data.\n";
            break;
        }
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();
    return 0;
}
