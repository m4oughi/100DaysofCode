#include <iostream>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int* ptr = numbers;

    // Iterate using pointer arithmetic
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";  // Outputs: 1 2 3 4 5
    }
    std::cout << std::endl;

    return 0;

}