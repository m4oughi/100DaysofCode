#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};

    auto sum = [](const std::vector<int>& row) {
        return std::accumulate(row.begin(), row.end(), 0);
    };

    auto minRow = std::min_element(matrix.begin(), matrix.end(), [&](const auto& a, const auto& b) {
        return sum(a) < sum(b);
    });

    auto maxRow = std::max_element(matrix.begin(), matrix.end(), [&](const auto& a, const auto& b) {
        return sum(a) < sum(b);
    });

    std::cout << "Row with smallest sum: ";
    for (int val : *minRow) std::cout << val << " ";
    std::cout << "\n";

    std::cout << "Row with largest sum: ";
    for (int val : *maxRow) std::cout << val << " ";
    std::cout << "\n";

    return 0;
}
