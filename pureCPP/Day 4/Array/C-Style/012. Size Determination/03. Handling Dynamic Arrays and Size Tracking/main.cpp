#include <iostream>

int main() {
    int size = 5;
    int* numbers = new int[size]{10, 20, 30, 40, 50};  // Dynamic array

    std::cout << "Array size: " << size << std::endl;  // Outputs: Array size: 5

    // Access elements
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";  // Outputs: 10 20 30 40 50
    }
    std::cout << std::endl;

    delete[] numbers;  // Free the allocated memory
}
