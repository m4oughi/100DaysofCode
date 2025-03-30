#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> jagged = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    for (const auto& row : jagged) {
        for (const auto& num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
