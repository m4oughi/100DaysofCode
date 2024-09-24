#include <iostream>
#include <thread>

void printMessage(const char* message) {
    std::cout << message << std::endl;
}

int main() {
    const char* msg = "Hello from thread!";
    
    std::thread t(printMessage, msg);  // Create a thread and pass the pointer

    t.join();  // Wait for the thread to finish
    return 0;
}
