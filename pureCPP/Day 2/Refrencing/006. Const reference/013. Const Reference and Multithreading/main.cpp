#include <iostream>
#include <thread>

void printMessage(const std::string &msg) {
    std::cout << msg << std::endl;  // Print without modifying the message
}

int main() {
    std::string message = "Hello from the thread!";
    std::thread t(printMessage, std::cref(message));  // Pass const reference to thread
    t.join();

    return 0;
}