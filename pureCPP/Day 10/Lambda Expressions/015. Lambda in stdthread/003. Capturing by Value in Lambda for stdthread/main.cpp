#include <iostream>
#include <thread>

int main() {
    int a = 10;
    int b = 20;

    std::thread t([a, b]() {
        std::cout << "Captured by value, Sum: " << a + b << std::endl;
    });

    t.join(); // Waits for the thread to finish
    return 0;
}
