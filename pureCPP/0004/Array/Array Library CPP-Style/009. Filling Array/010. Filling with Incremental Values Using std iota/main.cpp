#include <iostream>
#include <array>
#include <numeric>  // For std::iota

int main() {
    std::array<int, 5> arr;

    std::iota(arr.begin(), arr.end(), 1);  // Fill with incremental values starting from 1

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 1 2 3 4 5
    }
    std::cout << std::endl;

    return 0;
}