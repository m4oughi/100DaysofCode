#include <iostream>

int main() {
    int numbers[3] = {10, 20, 30};
    int* ptr = numbers;  // Pointer to the first element

    // Access elements using pointer arithmetic
    std::cout << *ptr << std::endl;      // Outputs: 10
    std::cout << *(ptr + 1) << std::endl;  // Outputs: 20
    std::cout << *(ptr + 2) << std::endl;  // Outputs: 30
}