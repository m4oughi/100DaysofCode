#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix(3, std::vector<int>(3));
    int val = 1;

    for (auto& row : matrix) {
        std::generate(row.begin(), row.end(), [&val]() { return val++; });
    }

    std::cout << "Generated matrix:\n";
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
