#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void printMessage(int id) {
    mtx.lock(); // Locking the mutex
    std::cout << "Thread " << id << " is executing.\n";
    mtx.unlock(); // Unlocking the mutex
}

int main() {
    std::thread t1(printMessage, 1);
    std::thread t2(printMessage, 2);

    t1.join();
    t2.join();

    return 0;
}
