#include <iostream>

constexpr int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    constexpr int result = max(10, 20); // Compile-time evaluation
    std::cout << result << std::endl; // Prints 20
}
