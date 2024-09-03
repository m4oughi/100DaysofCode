#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 3> arr2 = {4, 5, 6};

    arr1.swap(arr2);  // Swap contents of arr1 and arr2

    for (const auto& elem : arr1) {
        std::cout << elem << " ";  // Output: 4 5 6
    }
    std::cout << std::endl;

    for (const auto& elem : arr2) {
        std::cout << elem << " ";  // Output: 1 2 3
    }
    std::cout << std::endl;

    return 0;

    return 0;
}