#include <iostream>

int main() {
    int rows = 3, cols = 4;
    int** matrix = new int*[rows];

    // Allocate and initialize the matrix
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i + j;
        }
    }

    // Print the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";  // Outputs the sum of indices
        }
        std::cout << std::endl;
    }

    // Clean up memory
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
