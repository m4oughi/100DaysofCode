#include <iostream>
#include <array>

int main() {
    std::array<int, 2> arr = {7, 14};
    auto& [x, y] = arr;  // Binding by reference to modify elements
    x *= 2;
    y *= 3;
    std::cout << "x: " << x << ", y: " << y << std::endl;  // Output: x: 14, y: 42
    std::cout << "arr[0]: " << arr[0] << ", arr[1]: " << arr[1] << std::endl;  // Output: arr[0]: 14, arr[1]: 42


    return 0;
}