#include <iostream>
#include <array>
#include <utility>  // For std::pair
#include <algorithm>  // For std::swap

int main() {
    std::array<std::pair<int, char>, 2> arr1 = {{{1, 'a'}, {2, 'b'}}};
    std::array<std::pair<int, char>, 2> arr2 = {{{3, 'c'}, {4, 'd'}}};

    std::swap(arr1, arr2);  // Swap contents of arr1 and arr2 using std::swap

    for (const auto& elem : arr1) {
        std::cout << elem.first << elem.second << " ";  // Output: 3c 4d
    }
    std::cout << std::endl;

    for (const auto& elem : arr2) {
        std::cout << elem.first << elem.second << " ";  // Output: 1a 2b
    }
    std::cout << std::endl;

    return 0;

    return 0;
}