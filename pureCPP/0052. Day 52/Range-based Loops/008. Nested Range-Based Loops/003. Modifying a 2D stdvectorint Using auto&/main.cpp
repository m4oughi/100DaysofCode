#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (auto& row : matrix) {  
        for (auto& num : row) { 
            num *= 2; // Modify elements
        }
    }

    for (const auto& row : matrix) {  
        for (const auto& num : row) { 
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
