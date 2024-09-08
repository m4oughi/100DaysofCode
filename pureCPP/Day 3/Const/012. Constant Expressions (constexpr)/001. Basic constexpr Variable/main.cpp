#include <iostream>

constexpr int square(int x) {
    return x * x;
}

int main() {
    constexpr int result = square(5); // Compile-time evaluation
    std::cout << result << std::endl; // Prints 25
}