#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    const int rows = 3;
    const int cols = 3;
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 2));

    // Parallel transform to square each element in the matrix
    for (auto& row : matrix) {
        std::transform(std::execution::par, row.begin(), row.end(), row.begin(), [](int n) {
            return n * n;
        });
    }

    std::cout << "Matrix after parallel transformation (squaring each element):" << std::endl;
    for (const auto& row : matrix) {
        for (int n : row) {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
