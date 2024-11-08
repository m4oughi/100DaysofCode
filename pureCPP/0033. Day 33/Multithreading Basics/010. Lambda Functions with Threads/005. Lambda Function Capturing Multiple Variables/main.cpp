#include <iostream>
#include <thread>

int main() {
    int a = 10, b = 20;
    std::thread t([=, &b]() {
        b += 5;
        std::cout << "Captured by value a = " << a << ", modified by reference b = " << b << std::endl;
    });
    t.join();
    std::cout << "Value of b after thread: " << b << std::endl;
    return 0;
}
