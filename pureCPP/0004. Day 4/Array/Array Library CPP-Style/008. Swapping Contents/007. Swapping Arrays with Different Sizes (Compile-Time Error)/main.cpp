#include <iostream>
#include <array>
#include <algorithm>  // For std::swap

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 4> arr2 = {4, 5, 6, 7};

    // Uncommenting the following line will cause a compile-time error
    // std::swap(arr1, arr2);  // Cannot swap arrays of different sizes


    return 0;
}