#include <iostream>
#include <thread>

void printMessage(std::string message, int times) {
    for (int i = 0; i < times; ++i) {
        std::cout << message << " (" << i + 1 << ")\n";
    }
}

int main() {
    std::thread t(printMessage, "Hello from thread", 3);
    t.join();

    return 0;
}
