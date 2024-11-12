#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void safePrint(const std::string& msg) {
    std::lock_guard<std::mutex> lock(mtx);  // Lock using lock_guard
    std::cout << msg << "\n";
}

int main() {
    std::thread t1(safePrint, "Thread 1: Hello");
    std::thread t2(safePrint, "Thread 2: Hello");

    t1.join();
    t2.join();
    return 0;
}
