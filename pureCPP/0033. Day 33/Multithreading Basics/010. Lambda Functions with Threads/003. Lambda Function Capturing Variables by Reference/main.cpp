#include <iostream>
#include <thread>

int main() {
    int x = 10;
    std::thread t([&x]() {
        x += 5;
        std::cout << "Captured by reference, x = " << x << std::endl;
    });
    t.join();
    std::cout << "Value of x after thread: " << x << std::endl;
    return 0;
}
