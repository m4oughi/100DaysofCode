#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {1, 2, 3},
        {4, 5, 6},
        {4, 5, 6},
        {7, 8, 9}
    };

    auto new_end = std::unique(matrix.begin(), matrix.end());

    std::cout << "Matrix after std::unique:\n";
    for (auto it = matrix.begin(); it != new_end; ++it) {
        for (int val : *it) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
