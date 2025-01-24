#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    std::vector<std::vector<int>> partial_matrix(2);

    std::copy_n(matrix.begin(), 2, partial_matrix.begin());

    std::cout << "Copied rows:" << std::endl;
    for (const auto& row : partial_matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
