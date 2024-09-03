#include <iostream>
#include <array>
#include <algorithm>  // For std::copy

int main() {
    std::array<int, 5> source = {1, 2, 3, 4, 5};
    std::array<int, 5> destination;

    std::copy(source.begin(), source.end(), destination.begin());  // Copy elements from source to destination

    for (const auto& elem : destination) {
        std::cout << elem << " ";  // Output: 1 2 3 4 5
    }
    std::cout << std::endl;

    return 0;
}