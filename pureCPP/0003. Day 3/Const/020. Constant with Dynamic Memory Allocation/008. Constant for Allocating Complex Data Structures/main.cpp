#include <iostream>
#include <vector>

const int SIZE = 5; // Size for dynamic data structure

int main() {
    std::vector<std::vector<int>> matrix(SIZE, std::vector<int>(SIZE)); // 2D vector

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matrix[i][j] = i * SIZE + j;
        }
    }

    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}
