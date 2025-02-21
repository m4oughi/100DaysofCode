#include <iostream>
#include <queue>
#include <thread>
#include <mutex>

std::queue<int> sharedQueue;
std::mutex mtx;

void producer() {
    std::queue<int> tempQueue;
    for (int i = 1; i <= 5; ++i) {
        tempQueue.push(i * 10);
    }

    std::lock_guard<std::mutex> lock(mtx);
    sharedQueue.swap(tempQueue);  // Efficiently replacing the shared queue
}

void consumer() {
    std::lock_guard<std::mutex> lock(mtx);
    while (!sharedQueue.empty()) {
        std::cout << "Consumed: " << sharedQueue.front() << std::endl;
        sharedQueue.pop();
    }
}

int main() {
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}
