#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(matrix.begin(), matrix.end(), generator);

    std::cout << "Matrix after shuffling rows:\n";
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
