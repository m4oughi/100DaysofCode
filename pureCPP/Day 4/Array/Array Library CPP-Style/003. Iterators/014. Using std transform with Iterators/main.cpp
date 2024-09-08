#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
    std::array<int, 5> arr2;

    std::transform(arr1.begin(), arr1.end(), arr2.begin(), [](int x) {
        return x * x;  // Square each element
    });

    for (const auto& elem : arr2) {
        std::cout << elem << " ";  // Output: 1 4 9 16 25
    }

    return 0;
}