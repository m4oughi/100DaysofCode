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
        cv.wait(lock, [] { return buffer.size() < maxBufferSize; });  // Wait if buffer is full
        buffer.push(i);
        std::cout << "Produced: " << i << "\n";
        cv.notify_all();  // Notify consumers to check predicate
    }
}

void consumer() {
    for (int i = 1; i <= 5; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !buffer.empty(); });  // Wait if buffer is empty
        int item = buffer.front();
        buffer.pop();
        std::cout << "Consumed: " << item << "\n";
        cv.notify_all();  // Notify producer to check predicate
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();
    return 0;
}
