#include <iostream>
#include <array>
#include <vector>
#include <algorithm>  // For std::copy

int main() {
    std::vector<int> vec = {100, 200, 300, 400, 500};
    std::array<int, 5> arr;

    std::copy(vec.begin(), vec.end(), arr.begin());  // Copy values from vector to array

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 100 200 300 400 500
    }

    return 0;
}