#include <iostream>
#include <thread>
#include <mutex>

int sharedValue = 0;
std::mutex mtx;

void increment() {
    for (int i = 0; i < 10000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);  // Locking the critical section
        ++sharedValue;
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final sharedValue: " << sharedValue << std::endl;
    return 0;
}
