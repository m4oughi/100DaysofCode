#include <iostream>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Pointer to the first element of the 2D array
    int* ptr = &matrix[0][0];

    // Access elements using pointer arithmetic
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << *(ptr + i * cols + j) << " ";  // Outputs: 1 2 3 4 5 6 7 8 9
        }
        std::cout << std::endl;
    }

    // Access elements using array indexing
    std::cout << matrix[1][2] << std::endl;  // Outputs: 6
    std::cout << *(ptr + 5) << std::endl;    // Also outputs: 6
}
