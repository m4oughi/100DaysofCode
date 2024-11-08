#include <iostream>
#include <thread>
#include <mutex>

int sharedValue = 0;
std::mutex mtx;

void increment() {
    for (int i = 0; i < 10000; ++i) {
        mtx.lock();  // Lock the mutex
        ++sharedValue;
        mtx.unlock();  // Unlock the mutex
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
