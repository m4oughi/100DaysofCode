#include <iostream>

int main() {
    int a = 5, b = 10;
    // Lambda capturing multiple variables by value
    auto captureMultipleValues = [a, b]() {
        std::cout << "Captured by value: a = " << a << ", b = " << b << std::endl;
    };
    a = 15;
    b = 20;
    captureMultipleValues(); // Outputs the original values: a = 5, b = 10
    return 0;
}
