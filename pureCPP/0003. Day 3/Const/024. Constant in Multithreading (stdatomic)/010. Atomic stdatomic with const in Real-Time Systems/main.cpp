#include <iostream>
#include <atomic>
#include <thread>
#include <chrono>

std::atomic<int> realTimeCounter(70);

void simulateRealTimeProcess() {
    for (int i = 0; i < 10; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        realTimeCounter.fetch_add(5); // Atomic add operation
    }
}

int main() {
    std::thread realTimeThread(simulateRealTimeProcess);
    realTimeThread.join();

    std::cout << "Real-time counter value: " << realTimeCounter.load() << std::endl; // Prints updated value
}
