#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {1, 2, 3};
    auto [x, y, z] = arr; // Decompose array into individual variables
    std::cout << x << " " << y << " " << z << std::endl; // Output: 1 2 3


    return 0;
}