#include <iostream>

int main() {
    int a = 5, b = 15;
    auto lambda = [&]() {
        std::cout << "Captured a: " << a << ", b: " << b << std::endl;
    };

    a = 25;
    b = 35;
    lambda(); // Outputs: Captured a: 25, b: 35
    return 0;
}
