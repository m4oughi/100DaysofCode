#include <iostream>
#include <vector>  // Include the vector header for dynamic array management

int main() {
    int rows = 3, cols = 4;

    // Use a vector of vectors to create a dynamic 2D array
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    // Initialize the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j;
        }
    }

    // Print the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Element [" << i << "][" << j << "]: " << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
