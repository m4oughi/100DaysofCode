#include <iostream>

int main() {
    int numbers[4] = {10, 20, 30, 40};
    int* ptr = numbers;  // Pointer to the first element

    // Accessing elements using pointer arithmetic
    std::cout << *(ptr + 1) << std::endl;  // Outputs: 20
    std::cout << *(ptr + 2) << std::endl;  // Outputs: 30

    for (int i = 0; i < 4; ++i) {
    std::cout << "Address of numbers[" << i << "]: " << &numbers[i] << std::endl;
    }

    /////////////////////////////////////////////////
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int* ptr = &matrix[0][0];  // Pointer to the first element

    // Access elements using pointer arithmetic
    for (int i = 0; i < 6; ++i) {
        std::cout << *(ptr + i) << " ";  // Outputs: 1 2 3 4 5 6
    }
}