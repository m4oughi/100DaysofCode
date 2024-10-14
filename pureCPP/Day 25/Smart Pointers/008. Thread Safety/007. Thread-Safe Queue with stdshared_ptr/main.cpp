#include <iostream>
#include <memory>
#include <queue>
#include <mutex>
#include <thread>

std::mutex mtx;
std::queue<std::shared_ptr<int>> q;

void producer() {
    for (int i = 0; i < 5; ++i) {
        auto data = std::make_shared<int>(i);
        std::lock_guard<std::mutex> lock(mtx);
        q.push(data);
        std::cout << "Produced: " << *data << std::endl;
    }
}

void consumer() {
    while (true) {
        std::lock_guard<std::mutex> lock(mtx);
        if (!q.empty()) {
            auto data = q.front();
            q.pop();
            std::cout << "Consumed: " << *data << std::endl;
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
