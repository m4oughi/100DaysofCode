#include <iostream>

int main() {
    int numbers[5] = {2, 4, 6, 8, 10};

    int* ptr = numbers;  // Pointer to the first element of the array

    // Traverse the array using pointer arithmetic
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";  // Outputs: 2 4 6 8 10
    }
    std::cout << std::endl;
}
