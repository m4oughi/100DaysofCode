#include <iostream>

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Determine the number of rows and columns
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    std::cout << "Rows: " << rows << std::endl;  // Outputs: Rows: 3
    std::cout << "Cols: " << cols << std::endl;  // Outputs: Cols: 4
}
