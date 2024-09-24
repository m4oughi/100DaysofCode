#include <iostream>

void printMatrix(int matrix[2][3]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";  // Outputs: 1 2 3 4 5 6
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printMatrix(matrix);
}
