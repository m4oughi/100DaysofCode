#include <iostream>
#include <queue>
#include <thread>
#include <mutex>

std::queue<int> q;
std::mutex mtx;

void producer() {
    for (int i = 1; i <= 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        q.push(i);
        std::cout << "Produced: " << i << ", Queue Size: " << q.size() << std::endl;
    }
}

void consumer() {
    while (true) {
        std::lock_guard<std::mutex> lock(mtx);
        if (q.size() > 0) {
            std::cout << "Consumed: " << q.front() << ", Queue Size: " << q.size() << std::endl;
            q.pop();
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

    std::cout << "Final queue size: " << q.size() << std::endl;  // 0

    return 0;
}
