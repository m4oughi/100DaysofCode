#include <iostream>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (auto& row : matrix) { // `auto&` ensures reference to sub-arrays
        for (auto num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
