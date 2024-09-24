#include <iostream>

int main() {
    int numbers[5] = {1, 2}; // Partial initialization

    // Print the array elements
    for (int i = 0; i < 5; ++i)
    {
        std::cout << numbers[i] << " "; // Outputs: 1 2 0 0 0
    }
    std::cout << std::endl;
}