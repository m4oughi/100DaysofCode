#include <array>
#include <vector>
#include <iostream>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::vector<int> vec = {10, 20, 30, 40, 50, 60};

    // Size determination for std::array
    std::cout << "std::array size: " << arr.size() << std::endl;  // Outputs: std::array size: 5

    // Size determination for std::vector
    std::cout << "std::vector size: " << vec.size() << std::endl;  // Outputs: std::vector size: 6
}
