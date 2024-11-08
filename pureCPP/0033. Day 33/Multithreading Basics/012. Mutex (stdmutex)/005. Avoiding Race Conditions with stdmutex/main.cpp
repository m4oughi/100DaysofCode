#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

int sharedValue = 0;
std::mutex mtx;

void increment() {
    for (int i = 0; i < 10000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        ++sharedValue;
    }
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(increment);
    }

    for (auto& t : threads) {
        t.join();
    }

    std::cout << "Final sharedValue: " << sharedValue << std::endl;
    return 0;
}
