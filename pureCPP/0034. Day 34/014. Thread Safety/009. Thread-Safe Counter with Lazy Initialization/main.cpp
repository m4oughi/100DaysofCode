#include <iostream>
#include <mutex>
#include <thread>

std::once_flag initFlag;
int* counter = nullptr;

void initializeCounter() {
    counter = new int(0); // Allocate counter
    std::cout << "Counter initialized\n";
}

void incrementCounter() {
    std::call_once(initFlag, initializeCounter); // Lazy initialization
    ++(*counter);
    std::cout << "Counter: " << *counter << "\n";
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    t1.join();
    t2.join();

    delete counter; // Clean up
    return 0;
}
