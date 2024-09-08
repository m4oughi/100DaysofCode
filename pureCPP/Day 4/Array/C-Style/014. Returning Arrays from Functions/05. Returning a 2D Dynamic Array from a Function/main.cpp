#include <iostream>

int** create2DArray(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j;  // Initialize matrix elements
        }
    }
    return matrix;  // Return the pointer to the 2D array
}

void delete2DArray(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int rows = 3, cols = 3;
    int** matrix = create2DArray(rows, cols);  // Get the 2D array from the function

    // Print the matrix elements
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";  // Outputs: 0 1 2, 3 4 5, 6 7 8
        }
        std::cout << std::endl;
    }

    delete2DArray(matrix, rows);  // Free the allocated memory
}
