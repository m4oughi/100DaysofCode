#include <iostream>

int main() {
    int a = 5, b = 10;
    // Lambda capturing 'a' by value and 'b' by reference
    auto mixedCapture = [a, &b]() {
        std::cout << "Captured by value: a = " << a << std::endl;
        std::cout << "Captured by reference: b = " << b << std::endl;
    };
    a = 15;
    b = 20;
    mixedCapture(); // Outputs a = 5 (original), b = 20 (updated)
    return 0;
}
