#include <iostream>
#include <array>
#include <cstring>  // For memcpy

int main() {
    std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
    std::array<int, 5> arr2;

    std::memcpy(arr2.data(), arr1.data(), arr1.size() * sizeof(int));  // Copy data from arr1 to arr2

    for (const auto& elem : arr2) {
        std::cout << elem << " ";  // Output: 1 2 3 4 5
    }

    return 0;
}