#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix(3, std::vector<int>(3, 0)); // 3x3 matrix filled with 0

    matrix[1][1] = 5; // Set middle element to 5

    for (const auto &row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
