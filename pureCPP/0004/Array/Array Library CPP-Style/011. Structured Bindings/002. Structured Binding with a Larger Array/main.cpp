#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {10, 20, 30};
    auto [a, b, c] = arr;  // Unpacking three elements
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;  // Output: a: 10, b: 20, c: 30


    return 0;
}