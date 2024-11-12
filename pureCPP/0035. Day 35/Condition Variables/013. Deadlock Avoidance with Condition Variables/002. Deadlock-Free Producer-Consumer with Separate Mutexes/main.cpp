#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>

std::condition_variable cv_producer, cv_consumer;
std::mutex mtx_producer, mtx_consumer;
std::queue<int> buffer;
const int maxSize = 5;

void producer() {
    for (int i = 1; i <= 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx_producer);  // Lock producer mutex
        cv_producer.wait(lock, [] { return buffer.size() < maxSize; });  // Wait until buffer has space
        buffer.push(i);
        std::cout << "Produced: " << i << "\n";
        cv_consumer.notify_one();  // Notify consumer
    }
}

void consumer() {
    for (int i = 1; i <= 10; ++i) {
        std::unique_lock<std::mutex> lock(mtx_consumer);  // Lock consumer mutex
        cv_consumer.wait(lock, [] { return !buffer.empty(); });  // Wait until buffer has items
        int item = buffer.front();
        buffer.pop();
        std::cout << "Consumed: " << item << "\n";
        cv_producer.notify_one();  // Notify producer
    }
}

int main() {
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();
    return 0;
}
