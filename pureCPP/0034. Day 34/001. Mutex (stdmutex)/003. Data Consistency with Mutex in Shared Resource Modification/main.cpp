#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int sharedCounter = 0;

void incrementCounter() {
    for (int i = 0; i < 100; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Protect counter increment
        ++sharedCounter;
    }
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    t1.join();
    t2.join();
    std::cout << "Final Counter Value: " << sharedCounter << "\n";
    return 0;
}
