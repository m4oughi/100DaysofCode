#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // Mutex to control access

void printMessage(const std::string& msg) {
    mtx.lock();               // Lock the mutex
    std::cout << msg << "\n";  // Access shared resource
    mtx.unlock();              // Unlock the mutex
}

int main() {
    std::thread t1(printMessage, "Hello from Thread 1");
    std::thread t2(printMessage, "Hello from Thread 2");

    t1.join();
    t2.join();
    return 0;
}
