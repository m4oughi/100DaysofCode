#include <iostream>
#include <thread>

void printMessage() {
    std::cout << "Hello from the thread!" << std::endl;
}

int main() {
    std::thread t1(printMessage); // Create a thread
    t1.join(); // Wait for the thread to finish
    return 0;
}
