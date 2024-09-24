#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 4> arr2 = {1, 2, 3, 4};

    // Uncommenting the following line will cause a compile-time error
    // if (arr1 == arr2) {
    //     std::cout << "arr1 and arr2 are equal." << std::endl;
    // }

    return 0;
}