#include <iostream>
#include <thread>

void hello() {
    std::cout << "Hello from a separate thread!\n";
}

int main() {
    std::thread t(hello); // Create a thread running `hello`
    t.join(); // Wait for thread to finish before exiting main

    return 0;
}
