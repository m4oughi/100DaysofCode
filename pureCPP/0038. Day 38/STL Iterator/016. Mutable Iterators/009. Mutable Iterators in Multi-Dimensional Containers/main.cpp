#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (std::vector<std::vector<int>>::iterator row = matrix.begin(); row != matrix.end(); ++row) {
        for (std::vector<int>::iterator col = row->begin(); col != row->end(); ++col) {
            *col *= 2; // Double each element
        }
    }

    std::cout << "Modified matrix:\n";
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
