#include <iostream>

int main() {
    int numbers[5]; // Default initialization

    // Print the array elements (may contain garbage values)
    for (int i = 0; i < 5; ++i)
    {
        std::cout << numbers[i] << " "; // Outputs undefined values
    }
    std::cout << std::endl;
}