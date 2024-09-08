#include <iostream>

void printMatrix(int matrix[][3], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";  // Outputs the elements of the matrix
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Pass the 2D array to the function
    printMatrix(matrix, 2);
    // Outputs:
    // 1 2 3
    // 4 5 6
}
