#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> vec2D = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};

    // Looping over each inner vector and printing its size
    for (size_t i = 0; i < vec2D.size(); ++i) {
        std::cout << "Size of inner vector " << i + 1 << ": " << vec2D[i].size() << std::endl;
    }
    
    // Output:
    // Size of inner vector 1: 3
    // Size of inner vector 2: 2
    // Size of inner vector 3: 4

    return 0;
}
