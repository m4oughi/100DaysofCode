#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include <stdexcept>

std::queue<int> q;
std::mutex mtx;

void producer() {
    try {
        for (int i = 0; i < 5; ++i) {
            std::lock_guard<std::mutex> lock(mtx);
            q.push(i);
        }
    } catch (...) {
        std::cerr << "Exception in producer thread!" << std::endl;
    }
}

void consumer() {
    try {
        for (int i = 0; i < 5; ++i) {
            std::lock_guard<std::mutex> lock(mtx);
            if (!q.empty()) {
                q.pop();
            } else {
                throw std::runtime_error("Queue is empty!");
            }
        }
    } catch (const std::exception& e) {
        std::cerr << "Consumer exception: " << e.what() << std::endl;
    }
}

int main() {
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    std::cout << "Queue operations completed safely.\n";

    return 0;
}
