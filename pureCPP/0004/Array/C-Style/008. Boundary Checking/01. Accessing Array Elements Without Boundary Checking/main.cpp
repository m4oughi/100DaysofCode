#include <iostream>

int main() {
    int numbers[3] = {1, 2, 3};

    // Accessing within bounds
    std::cout << numbers[2] << std::endl; // Outputs: 3

    // Accessing out of bounds (undefined behavior)
    std::cout << numbers[4] << std::endl; // No compile-time error, but result is unpredictable
}