#include <iostream>
#include <array>

int main() {
    constexpr std::array<int, 3> arr = {5, 15, 25};
    auto [first, second, third] = arr;  // Structured binding with constexpr
    std::cout << "first: " << first << ", second: " << second << ", third: " << third << std::endl;  // Output: first: 5, second: 15, third: 25


    return 0;
}