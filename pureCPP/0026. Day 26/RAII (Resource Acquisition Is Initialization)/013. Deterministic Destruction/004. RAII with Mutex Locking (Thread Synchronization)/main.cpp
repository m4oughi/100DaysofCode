#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void safeFunction() {
    std::lock_guard<std::mutex> lock(mtx);  // Mutex locked
    std::cout << "Critical section." << std::endl;
    // Mutex unlocked when `lock` goes out of scope
}

int main() {
    std::thread t1(safeFunction);
    std::thread t2(safeFunction);
    
    t1.join();
    t2.join();
}
