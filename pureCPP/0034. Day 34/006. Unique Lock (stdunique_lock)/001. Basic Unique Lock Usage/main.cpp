#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void printMessage(const std::string& message) {
    std::unique_lock<std::mutex> lock(mtx); // Automatically locks the mutex
    std::cout << message << "\n";
}

int main() {
    std::thread t1(printMessage, "Hello from Thread 1");
    std::thread t2(printMessage, "Hello from Thread 2");

    t1.join();
    t2.join();
    return 0;
}
