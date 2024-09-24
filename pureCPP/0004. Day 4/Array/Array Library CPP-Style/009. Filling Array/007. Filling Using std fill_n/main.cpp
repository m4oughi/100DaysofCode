#include <iostream>
#include <array>
#include <algorithm>  // For std::fill_n

int main() {
    std::array<int, 6> arr;
    std::fill_n(arr.begin(), arr.size(), 42);  // Fill all elements with 42

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 42 42 42 42 42 42
    }
    std::cout << std::endl;

    return 0;
}