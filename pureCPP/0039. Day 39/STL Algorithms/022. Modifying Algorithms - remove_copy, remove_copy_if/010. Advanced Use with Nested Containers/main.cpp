#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {10, 20, 30},
        {4, 5, 6}
    };
    std::vector<std::vector<int>> result;

    std::remove_copy_if(matrix.begin(), matrix.end(), std::back_inserter(result), [](const std::vector<int>& row) {
        return std::all_of(row.begin(), row.end(), [](int val) { return val > 5; }); // Exclude rows with all values > 5
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
