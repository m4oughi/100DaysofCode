#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<std::list<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (auto row = matrix.begin(); row != matrix.end(); ++row) {
        for (auto col = row->begin(); col != row->end(); ) {
            if (*col % 2 == 0) {
                col = row->erase(col); // Safely erase even numbers
            } else {
                ++col;
            }
        }
    }

    std::cout << "Matrix after removal:\n";
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
