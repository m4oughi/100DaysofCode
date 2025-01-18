#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Matrix elements using const_iterator:\n";
    for (std::vector<std::vector<int>>::const_iterator row = matrix.cbegin(); row != matrix.cend(); ++row) {
        for (std::vector<int>::const_iterator col = row->cbegin(); col != row->cend(); ++col) {
            std::cout << *col << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
