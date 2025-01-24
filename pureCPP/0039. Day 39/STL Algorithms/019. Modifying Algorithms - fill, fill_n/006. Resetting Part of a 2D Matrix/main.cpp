#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::fill(matrix[1].begin(), matrix[1].end(), 0); // Reset the second row

    std::cout << "Matrix after filling:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
