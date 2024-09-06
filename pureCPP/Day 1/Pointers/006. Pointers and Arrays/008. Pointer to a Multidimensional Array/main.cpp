#include <iostream>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = matrix;  // Pointer to an array of 3 integers

    // Access elements using pointer to a multidimensional array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "Element [" << i << "][" << j << "]: " << ptr[i][j] << std::endl;
        }
    }

    return 0;
}
