#include <iostream>

int main() {
    int matrix[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Access and modify elements
    matrix[1][0][2] = 99;

    // Print the 3D array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 3; ++k) {
                std::cout << matrix[i][j][k] << " ";  // Outputs the elements, with one modified
            }
            std::cout << std::endl;
        }
        std::cout << "---" << std::endl;
    }
}
