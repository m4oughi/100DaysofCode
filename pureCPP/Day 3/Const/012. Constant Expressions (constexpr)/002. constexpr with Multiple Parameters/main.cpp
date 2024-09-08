#include <iostream>

constexpr int multiply(int a, int b) {
    return a * b;
}

int main() {
    constexpr int result = multiply(6, 7); // Compile-time evaluation
    std::cout << result << std::endl; // Prints 42
}
