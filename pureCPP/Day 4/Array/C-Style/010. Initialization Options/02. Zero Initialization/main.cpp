#include <iostream>

int main() {
    int numbers[5] = {}; // Zero initialization

    // Print the array elements (all should be zero)
    for (int i = 0; i < 5; ++i)
    {
        std::cout << numbers[i] << " "; // Outputs: 0 0 0 0 0
    }
    std::cout << std::endl;
}