#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2}, {3, 4}, {5, 6}};

    for (const std::vector<int>& row : matrix) {
        for (const int& num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
