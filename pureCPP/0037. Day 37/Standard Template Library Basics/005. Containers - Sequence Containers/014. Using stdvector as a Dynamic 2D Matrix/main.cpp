#include <iostream>
#include <vector>

int main() {
    int rows = 3, cols = 4;
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 0));

    // Fill the matrix with increasing values
    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = value++;
        }
    }

    // Print the matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
