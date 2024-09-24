#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
    std::array<int, 5> arr2;

    std::copy(arr1.begin(), arr1.end(), arr2.begin());  // Copy elements from arr1 to arr2

    for (const auto& elem : arr2) {
        std::cout << elem << " ";  // Output: 1 2 3 4 5
    }

    return 0;
}