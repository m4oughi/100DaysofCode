#include <iostream>
#include <array>
#include <utility>  // For std::exchange

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 3> arr2 = {4, 5, 6};

    std::array<int, 3> original_arr1 = std::exchange(arr1, arr2);  // Swap contents using std::exchange

    for (const auto& elem : arr1) {
        std::cout << elem << " ";  // Output: 4 5 6
    }
    std::cout << std::endl;

    for (const auto& elem : original_arr1) {
        std::cout << elem << " ";  // Output: 1 2 3
    }
    std::cout << std::endl;

    return 0;
}