#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
bool dataReady = false;

void consumer(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return dataReady; });  // Wait until 'dataReady' is true
    std::cout << "Consumer " << id << " received data.\n";
}

void producer() {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate data preparation
    {
        std::lock_guard<std::mutex> lock(mtx);
        dataReady = true;
    }
    cv.notify_all();  // Notify all consumers to check the predicate
}

int main() {
    std::vector<std::thread> consumers;
    for (int i = 1; i <= 3; ++i) {
        consumers.emplace_back(consumer, i);
    }

    std::thread prod(producer);

    for (auto& consumer : consumers) {
        consumer.join();
    }
    prod.join();
    return 0;
}
