#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {3, 1, 4, 1, 5};
    std::sort(arr.begin(), arr.end());  // Sorting the array in ascending order

    std::cout << "Sorted array: ";
    for (int n : arr) {
        std::cout << n << " ";  // Output: 1 1 3 4 5
    }
    std::cout << std::endl;

    return 0;
}