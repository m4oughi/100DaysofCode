#include <iostream>
#include <array>
#include <algorithm>  // For std::transform

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::transform(arr.begin(), arr.end(), arr.begin(), [](int x) {
        return x % 2 == 0 ? x * 2 : x;  // Double even numbers
    });

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 1 4 3 8 5
    }

    return 0;
}