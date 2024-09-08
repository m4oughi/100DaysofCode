#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 3> arr2 = {2, 2, 3};

    if (arr1 == arr2) {
        std::cout << "arr1 == arr2" << std::endl;
    }
    if (arr1 != arr2) {
        std::cout << "arr1 != arr2" << std::endl;  // Output: arr1 != arr2
    }
    if (arr1 < arr2) {
        std::cout << "arr1 < arr2" << std::endl;   // Output: arr1 < arr2
    }
    if (arr1 <= arr2) {
        std::cout << "arr1 <= arr2" << std::endl;  // Output: arr1 <= arr2
    }
    if (arr1 > arr2) {
        std::cout << "arr1 > arr2" << std::endl;
    }
    if (arr1 >= arr2) {
        std::cout << "arr1 >= arr2" << std::endl;
    }

    return 0;
}