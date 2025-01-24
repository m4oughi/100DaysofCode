#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Remove rows where the sum of elements is greater than 15
    auto new_end = std::remove_if(matrix.begin(), matrix.end(), [](const std::vector<int>& row) {
        return std::accumulate(row.begin(), row.end(), 0) > 15;
    });
    matrix.erase(new_end, matrix.end());

    std::cout << "Matrix after remove_if:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
