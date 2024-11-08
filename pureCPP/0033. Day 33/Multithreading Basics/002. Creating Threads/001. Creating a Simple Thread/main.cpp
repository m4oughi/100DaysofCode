#include <iostream>
#include <thread>

void sayHello() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t1(sayHello); // Create a thread
    t1.join(); // Wait for thread to finish
    return 0;
}
