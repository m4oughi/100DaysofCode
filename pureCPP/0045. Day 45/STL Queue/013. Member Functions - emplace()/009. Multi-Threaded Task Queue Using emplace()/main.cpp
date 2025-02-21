#include <iostream>
#include <queue>
#include <thread>
#include <mutex>

std::queue<int> taskQueue;
std::mutex mtx;

void producer() {
    for (int i = 1; i <= 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        taskQueue.emplace(i);
        std::cout << "Produced: " << i << std::endl;
    }
}

void consumer() {
    while (true) {
        std::lock_guard<std::mutex> lock(mtx);
        if (!taskQueue.empty()) {
            std::cout << "Consumed: " << taskQueue.front() << std::endl;
            taskQueue.pop();
        } else {
            break;
        }
    }
}

int main() {
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}
