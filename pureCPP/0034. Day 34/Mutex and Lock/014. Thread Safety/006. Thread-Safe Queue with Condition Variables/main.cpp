#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <thread>

std::queue<int> queue;
std::mutex mtx;
std::condition_variable cv;

void producer(int value) {
    std::lock_guard<std::mutex> lock(mtx);
    queue.push(value);
    cv.notify_one(); // Notify a waiting consumer
    std::cout << "Produced: " << value << "\n";
}

void consumer() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []() { return !queue.empty(); });
    int value = queue.front();
    queue.pop();
    std::cout << "Consumed: " << value << "\n";
}

int main() {
    std::thread t1(producer, 1);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}
