#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 6> arr = {1, 4, 6, 2, 3, 5};
    std::inplace_merge(arr.begin(), arr.begin() + 3, arr.end());  // Merging sorted halves in-place

    std::cout << "In-place merged array: ";
    for (const int& n : arr) {
        std::cout << n << " ";  // Output: 1 2 3 4 5 6
    }
    std::cout << std::endl;

    return 0;
}