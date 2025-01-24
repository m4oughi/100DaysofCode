#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Swap the first and last rows
    std::swap_ranges(matrix[0].begin(), matrix[0].end(), matrix[2].begin());

    std::cout << "Matrix after row swap:\n";
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
