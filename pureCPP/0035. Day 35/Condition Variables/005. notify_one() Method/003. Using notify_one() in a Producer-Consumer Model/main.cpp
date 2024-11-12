#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>

std::condition_variable cv;
std::mutex mtx;
std::queue<int> buffer;
const int maxBufferSize = 3;

void producer() {
    for (int i = 1; i <= 5; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return buffer.size() < maxBufferSize; });
        buffer.push(i);
        std::cout << "Produced: " << i << "\n";
        cv.notify_one();
    }
}

void consumer() {
    for (int i = 1; i <= 5; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !buffer.empty(); });
        int item = buffer.front();
        buffer.pop();
        std::cout << "Consumed: " << item << "\n";
        cv.notify_one();
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();
    return 0;
}
