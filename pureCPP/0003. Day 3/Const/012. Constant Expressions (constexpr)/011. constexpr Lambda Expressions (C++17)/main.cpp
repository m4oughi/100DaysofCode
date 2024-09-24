#include <iostream>

int main() {
    constexpr auto lambda = [](int a, int b) { return a + b; };
    constexpr int result = lambda(10, 20); // Compile-time evaluation
    std::cout << result << std::endl; // Prints 30
}