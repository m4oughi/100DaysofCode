#include <iostream>
#include <array>
#include <algorithm>  // For std::swap

int main() {
    std::array<double, 3> arr1 = {1.1, 2.2, 3.3};
    std::array<double, 3> arr2 = {4.4, 5.5, 6.6};

    std::swap(arr1, arr2);  // Swap contents of arr1 and arr2 using std::swap

    for (const auto& elem : arr1) {
        std::cout << elem << " ";  // Output: 4.4 5.5 6.6
    }
    std::cout << std::endl;

    for (const auto& elem : arr2) {
        std::cout << elem << " ";  // Output: 1.1 2.2 3.3
    }
    std::cout << std::endl;

    return 0;
}