#include <iostream>
#include <array>
#include <tuple>

int main() {
    std::array<int, 3> arr = {1, 2, 3};
    auto [first, second, third] = std::tuple{arr[0], arr[1], arr[2]};  // Combining structured bindings with tuples
    std::cout << "first: " << first << ", second: " << second << ", third: " << third << std::endl;  // Output: first: 1, second: 2, third: 3


    return 0;
}