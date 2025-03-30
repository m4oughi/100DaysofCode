#include <iostream>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
