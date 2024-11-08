#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void criticalSection(int threadID) {
    try {
        std::lock_guard<std::mutex> lock(mtx);  // Mutex locked
        std::cout << "Thread " << threadID << " is in the critical section" << std::endl;
        if (threadID == 2) {
            throw std::runtime_error("Simulated exception");
        }
        // Mutex is automatically unlocked even if an exception is thrown
    } catch (...) {
        std::cout << "Thread " << threadID << " caught an exception" << std::endl;
    }
}

int main() {
    std::thread t1(criticalSection, 1);
    std::thread t2(criticalSection, 2);

    t1.join();
    t2.join();

    return 0;
}
