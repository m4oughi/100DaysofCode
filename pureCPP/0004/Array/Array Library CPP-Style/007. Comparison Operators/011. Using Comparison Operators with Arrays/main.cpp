#include <iostream>
#include <array>
#include <utility>  // For std::pair

int main() {
    std::array<std::pair<int, char>, 3> arr1 = {{{1, 'a'}, {2, 'b'}, {3, 'c'}}};
    std::array<std::pair<int, char>, 3> arr2 = {{{1, 'a'}, {2, 'b'}, {4, 'd'}}};

    if (arr1 < arr2) {
        std::cout << "arr1 is lexicographically less than arr2." << std::endl;  // Output: arr1 is lexicographically less than arr2.
    }

    return 0;
}