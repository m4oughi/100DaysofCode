#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 3> arr2 = {3, 2, 1};

    if (arr1 != arr2) {
        std::cout << "arr1 and arr2 are not equal." << std::endl;  // Output: arr1 and arr2 are not equal.
    }

    return 0;
}