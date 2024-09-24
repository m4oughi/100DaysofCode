#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 8> arr = {1, 2, 2, 3, 4, 4, 5, 5};
    auto last = std::unique(arr.begin(), arr.end());  // Removing consecutive duplicates

    std::cout << "Array after removing consecutive duplicates: ";
    for (auto it = arr.begin(); it != last; ++it) {
        std::cout << *it << " ";  // Output: 1 2 3 4 5
    }
    std::cout << std::endl;

    return 0;
}