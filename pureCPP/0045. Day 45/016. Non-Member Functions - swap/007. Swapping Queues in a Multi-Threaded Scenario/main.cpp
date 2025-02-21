#include <iostream>
#include <queue>
#include <thread>
#include <mutex>

std::queue<int> mainQueue, tempQueue;
std::mutex mtx;

void producer() {
    for (int i = 1; i <= 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        tempQueue.push(i);
    }
}

void consumer() {
    std::lock_guard<std::mutex> lock(mtx);
    std::swap(mainQueue, tempQueue);

    while (!mainQueue.empty()) {
        std::cout << "Processing item: " << mainQueue.front() << std::endl;
        mainQueue.pop();
    }
}

int main() {
    std::thread t1(producer);
    t1.join();

    std::thread t2(consumer);
    t2.join();

    return 0;
}
