#include <iostream>
#include <array>
#include <algorithm>  // For std::fill

int main() {
    std::array<int, 5> arr;

    std::fill(arr.data(), arr.data() + arr.size(), 7);  // Set all elements to 7

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 7 7 7 7 7
    }

    return 0;
}