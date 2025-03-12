#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void printSafe(int id) {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Thread " << id << " is running safely.\n";
}

int main() {
    std::thread t1(printSafe, 1);
    std::thread t2(printSafe, 2);

    t1.join();
    t2.join();

    return 0;
}
