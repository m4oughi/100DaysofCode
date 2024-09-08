#include <iostream>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Determine the number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Array size: " << size << std::endl; // Outputs: Array size: 5
}