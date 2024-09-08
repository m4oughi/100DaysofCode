#include <iostream>

int main() {
    int numbers[3] = {10, 20, 30};

    // Array name as a pointer to the first element
    std::cout << *numbers << std::endl; // Outputs: 10

    // Accessing elements via pointer arithmetic
    std::cout << *(numbers + 1) << std::endl; // Outputs: 20
    std::cout << *(numbers + 2) << std::endl; // Outputs: 30
}