#include <iostream>
#include <array>

int main() {
    std::array<std::array<int, 2>, 3> arr;
    arr.fill({7, 7});  // Fill all elements with {7, 7}

    for (const auto& inner_arr : arr) {
        for (const auto& elem : inner_arr) {
            std::cout << elem << " ";  // Output: 7 7 7 7 7 7
        }
    }
    std::cout << std::endl;

    return 0;
}