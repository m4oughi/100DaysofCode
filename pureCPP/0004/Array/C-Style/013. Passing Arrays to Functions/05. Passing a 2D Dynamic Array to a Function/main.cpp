#include <iostream>

void fillMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j;  // Fill the matrix with values
        }
    }
}

int main() {
    int rows = 3, cols = 3;
    int** matrix = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Pass the dynamic 2D array to the function
    fillMatrix(matrix, rows, cols);

    // Print the filled matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";  // Outputs: 0 1 2, 3 4 5, 6 7 8
        }
        std::cout << std::endl;
    }

    // Free the allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
