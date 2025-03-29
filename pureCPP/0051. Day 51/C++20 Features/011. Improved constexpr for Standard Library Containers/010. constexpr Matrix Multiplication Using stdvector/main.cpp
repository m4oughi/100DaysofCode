#include <vector>
#include <iostream>

constexpr std::vector<std::vector<int>> multiply_matrices(
    const std::vector<std::vector<int>>& a, 
    const std::vector<std::vector<int>>& b) 
{
    std::vector<std::vector<int>> result(2, std::vector<int>(2, 0));
    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

int main() {
    constexpr std::vector<std::vector<int>> matrix1 = {{1, 2}, {3, 4}};
    constexpr std::vector<std::vector<int>> matrix2 = {{2, 0}, {1, 2}};
    constexpr std::vector<std::vector<int>> result = multiply_matrices(matrix1, matrix2);

    for (const auto& row : result) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
}
