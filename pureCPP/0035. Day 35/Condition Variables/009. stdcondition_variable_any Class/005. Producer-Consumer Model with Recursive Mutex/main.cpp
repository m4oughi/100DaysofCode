#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>
#include <mutex>

std::condition_variable_any cv_any;
std::recursive_mutex rec_mtx;
std::queue<int> buffer;
const int maxBufferSize = 3;

void producer() {
    for (int i = 1; i <= 5; ++i) {
        std::unique_lock<std::recursive_mutex> lock(rec_mtx);
        cv_any.wait(lock, [] { return buffer.size() < maxBufferSize; });
        buffer.push(i);
        std::cout << "Produced: " << i << "\n";
        cv_any.notify_all();  // Notify consumers
    }
}

void consumer() {
    for (int i = 1; i <= 5; ++i) {
        std::unique_lock<std::recursive_mutex> lock(rec_mtx);
        cv_any.wait(lock, [] { return !buffer.empty(); });
        int item = buffer.front();
        buffer.pop();
        std::cout << "Consumed: " << item << "\n";
        cv_any.notify_all();  // Notify producer
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons(consumer);

    prod.join();
    cons.join();
    return 0;
}
