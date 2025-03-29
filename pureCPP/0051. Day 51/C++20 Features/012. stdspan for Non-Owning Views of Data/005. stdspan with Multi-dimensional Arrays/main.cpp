#include <iostream>
#include <span>

void print_matrix(std::span<int, 6> matrix) {
    for (size_t i = 0; i < 2; ++i) {
        for (size_t j = 0; j < 3; ++j) {
            std::cout << matrix[i * 3 + j] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print_matrix(std::span<int, 6>{matrix[0], 6});  // Flattened 2D array

    return 0;
}
