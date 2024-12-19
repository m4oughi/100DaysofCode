#include <iostream>
#include <future>
#include <thread>
#include <queue>

std::queue<int> dataQueue;  // Shared queue

void producer(std::promise<void>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate work
    dataQueue.push(100);  // Produce data
    prom.set_value();  // Notify consumer that data is available
}

void consumer(std::future<void>& fut) {
    fut.get();  // Wait for the producer to finish

    if (!dataQueue.empty()) {
        std::cout << "Consumed: " << dataQueue.front() << std::endl;  // Output: 100
        dataQueue.pop();
    }
}

int main() {
    std::promise<void> prom;  // Create a promise for synchronization
    std::future<void> fut = prom.get_future();  // Get future for synchronization

    // Launch producer and consumer threads
    std::thread t1(producer, std::ref(prom));
    std::thread t2(consumer, std::ref(fut));

    t1.join();
    t2.join();

    return 0;
}
