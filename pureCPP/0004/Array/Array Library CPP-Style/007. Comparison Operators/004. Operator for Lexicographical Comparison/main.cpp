#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 3> arr2 = {1, 2, 3};

    if (arr1 <= arr2) {
        std::cout << "arr1 is less than or equal to arr2." << std::endl;  // Output: arr1 is less than or equal to arr2.
    }

    return 0;
}