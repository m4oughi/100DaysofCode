#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> matrix = {{-5, 15, 30}, {10, 50, 5}, {20, -10, 25}};
    int lower = 0;
    int upper = 25;

    for (auto& row : matrix) {
        for (auto& val : row) {
            val = std::clamp(val, lower, upper);
        }
    }

    std::cout << "Clamped matrix:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
