#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>

std::condition_variable cv;
std::mutex mtx;
std::queue<int> buffer;
const unsigned int maxBufferSize = 10;

void producer() {
    int data = 1;
    while (data <= 20) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return buffer.size() < maxBufferSize; });

        buffer.push(data);
        std::cout << "Produced: " << data << "\n";
        data++;

        cv.notify_all();
    }
}

void consumer() {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !buffer.empty(); });

        int data = buffer.front();
        buffer.pop();
        std::cout << "Consumed: " << data << "\n";

        cv.notify_all();

        if (data == 20) break; // Exit when all data has been processed
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();
    return 0;
}
