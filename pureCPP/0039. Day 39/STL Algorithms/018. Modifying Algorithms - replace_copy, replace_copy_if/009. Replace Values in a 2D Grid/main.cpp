#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 2},
        {7, 2, 9}
    };
    std::vector<std::vector<int>> result(grid.size(), std::vector<int>(grid[0].size()));

    for (size_t i = 0; i < grid.size(); ++i) {
        std::replace_copy(grid[i].begin(), grid[i].end(), result[i].begin(), 2, 0);
    }

    std::cout << "Original grid:\n";
    for (const auto& row : grid) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Result grid:\n";
    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
