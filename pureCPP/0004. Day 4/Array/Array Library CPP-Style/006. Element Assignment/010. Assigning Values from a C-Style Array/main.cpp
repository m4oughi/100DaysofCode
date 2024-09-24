#include <iostream>
#include <array>
#include <algorithm>  // For std::copy

int main() {
    int c_array[5] = {5, 10, 15, 20, 25};
    std::array<int, 5> arr;

    std::copy(std::begin(c_array), std::end(c_array), arr.begin());  // Copy values from C-style array to std::array

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 5 10 15 20 25
    }

    return 0;
}