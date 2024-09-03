#include <iostream>
#include <array>
#include <algorithm>  // For std::swap

int main() {
    std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
    std::array<int, 5> arr2 = {6, 7, 8, 9, 10};

    std::swap(arr1, arr2);  // Swap contents of arr1 and arr2

    for (const auto& elem : arr1) {
        std::cout << elem << " ";  // Output: 6 7 8 9 10
    }

    std::cout << std::endl;

    for (const auto& elem : arr2) {
        std::cout << elem << " ";  // Output: 1 2 3 4 5
    }

    return 0;
}