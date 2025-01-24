#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int rows = 3, cols = 4;
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    int start = 1;
    for (auto& row : matrix) {
        std::iota(row.begin(), row.end(), start);
        start += cols;
    }

    std::cout << "2D Matrix:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
