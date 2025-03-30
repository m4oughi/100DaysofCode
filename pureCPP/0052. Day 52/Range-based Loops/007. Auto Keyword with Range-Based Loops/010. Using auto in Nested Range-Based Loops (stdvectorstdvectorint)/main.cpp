#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (const auto& row : matrix) { // Outer loop (each row)
        for (auto num : row) { // Inner loop (each element)
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
