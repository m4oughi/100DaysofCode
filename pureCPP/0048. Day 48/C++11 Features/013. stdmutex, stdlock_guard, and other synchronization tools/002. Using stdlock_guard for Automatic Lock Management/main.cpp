#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void safePrint(int id) {
    std::lock_guard<std::mutex> lock(mtx); // Automatically locks and unlocks
    std::cout << "Thread " << id << " is running safely.\n";
}

int main() {
    std::thread t1(safePrint, 1);
    std::thread t2(safePrint, 2);

    t1.join();
    t2.join();

    return 0;
}
