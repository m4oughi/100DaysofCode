#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 3> arr1 = {1, 3, 5};
    std::array<int, 3> arr2 = {2, 4, 6};
    std::array<int, 6> result;

    std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), result.begin());  // Merging two sorted arrays

    std::cout << "Merged array: ";
    for (const int& n : result) {
        std::cout << n << " ";  // Output: 1 2 3 4 5 6
    }
    std::cout << std::endl;
    return 0;
}
