#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
int counter = 0;

void incrementCounter() {
    std::lock_guard<std::mutex> lock(mtx); // Locking to prevent data race
    ++counter;
    std::cout << "Counter: " << counter << "\n";
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    t1.join();
    t2.join();

    return 0;
}
