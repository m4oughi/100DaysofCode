#include <iostream>
#include <thread>
#include <condition_variable>
#include <queue>

std::condition_variable cv;
std::mutex mtx;
std::queue<int> buffer;
const int maxBufferSize = 10;
bool stopProduction = false;

void producer(int id) {
    for (int i = 1; i <= 5; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return buffer.size() < maxBufferSize; });
        buffer.push(i);
        std::cout << "Producer " << id << " produced: " << i << "\n";
        cv.notify_all();
    }
}

void consumer(int id) {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !buffer.empty() || stopProduction; });
        
        if (buffer.empty() && stopProduction) break;

        int item = buffer.front();
        buffer.pop();
        std::cout << "Consumer " << id << " consumed: " << item << "\n";
        cv.notify_all();
    }
}

int main() {
    std::vector<std::thread> producers, consumers;

    for (int i = 0; i < 2; ++i) producers.emplace_back(producer, i);
    for (int i = 0; i < 2; ++i) consumers.emplace_back(consumer, i);

    for (auto& p : producers) p.join();

    {
        std::lock_guard<std::mutex> lock(mtx);
        stopProduction = true;
    }
    cv.notify_all();

    for (auto& c : consumers) c.join();
    return 0;
}
