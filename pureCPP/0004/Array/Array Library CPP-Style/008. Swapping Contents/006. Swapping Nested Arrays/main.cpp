#include <iostream>
#include <array>
#include <algorithm>  // For std::swap

int main() {
    std::array<std::array<int, 2>, 2> arr1 = {{{1, 2}, {3, 4}}};
    std::array<std::array<int, 2>, 2> arr2 = {{{5, 6}, {7, 8}}};

    std::swap(arr1, arr2);  // Swap contents of arr1 and arr2 using std::swap

    for (const auto& inner_arr : arr1) {
        for (const auto& elem : inner_arr) {
            std::cout << elem << " ";  // Output: 5 6 7 8
        }
    }
    std::cout << std::endl;

    for (const auto& inner_arr : arr2) {
        for (const auto& elem : inner_arr) {
            std::cout << elem << " ";  // Output: 1 2 3 4
        }
    }
    std::cout << std::endl;

    return 0;
}