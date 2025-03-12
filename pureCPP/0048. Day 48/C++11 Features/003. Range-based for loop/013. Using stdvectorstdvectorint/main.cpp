#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> grid = {{1, 2, 3}, {4, 5, 6}};

    for (const auto& row : grid) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
