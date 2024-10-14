#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void printMessage(const std::string& msg) {
    std::lock_guard<std::mutex> lock(mtx);  // Mutex locked in constructor.
    std::cout << msg << std::endl;          // Mutex automatically unlocked when `lock` goes out of scope.
}

int main() {
    std::thread t1(printMessage, "Thread 1: RAII in action.");
    std::thread t2(printMessage, "Thread 2: Safe resource management.");
    
    t1.join();
    t2.join();
}
