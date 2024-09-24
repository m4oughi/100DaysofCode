#include <iostream>
#include <array>
#include <utility>  // For std::pair

int main() {
    std::array<std::pair<int, char>, 3> arr;
    arr.fill({1, 'a'});  // Fill all elements with pair {1, 'a'}

    for (const auto& elem : arr) {
        std::cout << "{" << elem.first << ", " << elem.second << "} ";  // Output: {1, a} {1, a} {1, a}
    }
    std::cout << std::endl;

    return 0;
}