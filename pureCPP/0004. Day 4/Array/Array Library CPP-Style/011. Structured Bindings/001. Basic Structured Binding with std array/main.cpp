#include <iostream>
#include <array>

int main() {
    std::array<int, 2> arr = {1, 2};
    auto [x, y] = arr;  // Structured binding to unpack elements
    std::cout << "x: " << x << ", y: " << y << std::endl;  // Output: x: 1, y: 2


    return 0;
}