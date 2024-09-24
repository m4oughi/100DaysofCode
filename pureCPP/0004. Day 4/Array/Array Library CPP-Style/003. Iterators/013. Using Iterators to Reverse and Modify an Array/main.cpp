#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::reverse(arr.begin(), arr.end());  // Reverse the array using iterators

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 5 4 3 2 1
    }

    return 0;
}