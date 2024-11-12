#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>

std::condition_variable cv;
std::mutex mtx;
std::queue<int> buffer;
const int maxBufferSize = 5;

void producer() {
    for (int i = 1; i <= 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return buffer.size() < maxBufferSize; }); // Wait if buffer is full
        buffer.push(i);
        std::cout << "Produced: " << i << "\n";
        cv.notify_all();
    }
}

void consumer() {
    for (int i = 1; i <= 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !buffer.empty(); }); // Wait if buffer is empty
        int item = buffer.front();
        buffer.pop();
        std::cout << "Consumed: " << item << "\n";
        cv.notify_all();
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();
    return 0;
}
