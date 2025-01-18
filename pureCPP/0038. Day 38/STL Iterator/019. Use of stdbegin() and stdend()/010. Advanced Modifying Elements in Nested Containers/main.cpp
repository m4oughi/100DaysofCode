#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<std::list<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto row = std::begin(matrix); row != std::end(matrix); ++row) {
        for (auto col = std::begin(*row); col != std::end(*row); ++col) {
            *col *= 2; // Multiply each element by 2
        }
    }

    std::cout << "Modified matrix: ";
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
