#include <iostream>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *ptr = &matrix[0][0]; // Pointer to the first element of the matrix

    // Access elements using pointer arithmetic
    for (int i = 0; i < 6; ++i)
    {
        std::cout << *(ptr + i) << " "; // Outputs: 1 2 3 4 5 6
    }
    std::cout << std::endl;
}