#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void safeIncrement(int& value) {
    std::lock_guard<std::mutex> lock(mtx);  // Mutex locked at function scope
    ++value;
}

int main() {
    int sharedValue = 0;

    std::thread t1(safeIncrement, std::ref(sharedValue));
    std::thread t2(safeIncrement, std::ref(sharedValue));

    t1.join();
    t2.join();

    std::cout << "Final sharedValue: " << sharedValue << std::endl;
    return 0;
}
