#include <iostream>
#include <array>
#include <algorithm>  // For std::swap

int main() {
    std::array<int, 3> arr1 = {7, 8, 9};
    std::array<int, 3> arr2 = {10, 11, 12};

    std::swap(arr1, arr2);  // Swap contents of arr1 and arr2 using std::swap

    for (const auto& elem : arr1) {
        std::cout << elem << " ";  // Output: 10 11 12
    }
    std::cout << std::endl;

    for (const auto& elem : arr2) {
        std::cout << elem << " ";  // Output: 7 8 9
    }
    std::cout << std::endl;

    return 0;
}