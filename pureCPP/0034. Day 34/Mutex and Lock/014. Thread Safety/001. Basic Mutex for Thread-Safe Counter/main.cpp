#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
int counter = 0;

void incrementCounter() {
    std::lock_guard<std::mutex> lock(mtx); // Lock is acquired and released automatically
    ++counter;
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    t1.join();
    t2.join();

    std::cout << "Counter: " << counter << "\n";
    return 0;
}
