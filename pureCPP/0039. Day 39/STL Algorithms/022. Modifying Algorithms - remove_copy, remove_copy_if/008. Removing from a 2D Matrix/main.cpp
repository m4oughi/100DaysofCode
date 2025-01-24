#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    std::vector<std::vector<int>> result;

    std::remove_copy_if(matrix.begin(), matrix.end(), std::back_inserter(result), [](const std::vector<int>& row) {
        return std::accumulate(row.begin(), row.end(), 0) > 15; // Exclude rows with sum > 15
    });

    std::cout << "Matrix after remove_copy_if:\n";
    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
