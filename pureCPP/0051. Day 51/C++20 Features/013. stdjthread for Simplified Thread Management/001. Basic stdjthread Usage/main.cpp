#include <iostream>
#include <thread>
#include <chrono>

void task() {
    std::cout << "Hello from jthread!\n";
}

int main() {
    std::jthread t(task);  // Starts a new thread and joins automatically
    return 0;
}
