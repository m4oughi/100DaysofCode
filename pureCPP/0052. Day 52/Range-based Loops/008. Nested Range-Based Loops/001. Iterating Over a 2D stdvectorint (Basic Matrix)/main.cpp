#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (const auto& row : matrix) {  // Iterating over rows
        for (const auto& num : row) { // Iterating over columns
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
