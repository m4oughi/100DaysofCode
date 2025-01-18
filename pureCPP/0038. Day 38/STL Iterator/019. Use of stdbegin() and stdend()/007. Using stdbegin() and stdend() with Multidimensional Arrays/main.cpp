#include <iostream>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    std::cout << "Matrix elements: ";
    for (auto row = std::begin(matrix); row != std::end(matrix); ++row) {
        for (auto col = std::begin(*row); col != std::end(*row); ++col) {
            std::cout << *col << " ";
        }
    }

    return 0;
}
