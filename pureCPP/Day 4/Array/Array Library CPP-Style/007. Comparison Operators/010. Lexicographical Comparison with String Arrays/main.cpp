#include <iostream>
#include <array>

int main() {
    std::array<std::string, 3> arr1 = {"apple", "banana", "cherry"};
    std::array<std::string, 3> arr2 = {"apple", "banana", "date"};

    if (arr1 < arr2) {
        std::cout << "arr1 is lexicographically less than arr2." << std::endl;  // Output: arr1 is lexicographically less than arr2.
    }

    return 0;
}