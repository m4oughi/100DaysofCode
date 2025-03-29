#include <iostream>
#include <format>

int main() {
    std::cout << std::format("Number: {:06}\n", 42);  // Zero-padded
    std::cout << std::format("Left-aligned: {:<10}|\n", 42);
    std::cout << std::format("Right-aligned: {:>10}|\n", 42);
    std::cout << std::format("Centered: {:^10}|\n", 42);

    return 0;
}
