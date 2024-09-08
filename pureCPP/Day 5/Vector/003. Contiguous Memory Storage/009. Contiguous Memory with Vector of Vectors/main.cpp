#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix(3, std::vector<int>(3, 0));

    // Fill the matrix with sequential values
    int value = 1;
    for (auto& row : matrix) {
        for (auto& elem : row) {
            elem = value++;
        }
    }

    // Display memory addresses of the first element of each row
    for (size_t i = 0; i < matrix.size(); ++i) {
        std::cout << "Row " << i << " address: " << &matrix[i][0] << std::endl;
    }

    // Access and modify a specific element using raw pointers
    int* ptr = &matrix[1][1];
    *ptr = 99;

    // Display the matrix
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
