#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5}; // Uniform initialization

    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
