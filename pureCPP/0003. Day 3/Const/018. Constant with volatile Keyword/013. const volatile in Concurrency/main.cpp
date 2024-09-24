#include <iostream>
#include <thread>

const volatile int sharedData = 700;

void readData() {
    std::cout << sharedData << std::endl; // Prints 700
}

int main() {
    std::thread t(readData);
    t.join();
}
