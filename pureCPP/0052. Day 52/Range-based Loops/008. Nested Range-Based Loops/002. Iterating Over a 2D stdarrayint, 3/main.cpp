#include <iostream>
#include <array>

int main() {
    std::array<std::array<int, 3>, 3> matrix = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    for (const auto& row : matrix) {  
        for (const auto& num : row) { 
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
