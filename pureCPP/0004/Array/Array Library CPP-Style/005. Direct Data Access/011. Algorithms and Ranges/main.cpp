#include <iostream>
#include <array>
#include <algorithm>  // For std::sort

int main() {
    std::array<int, 5> arr = {5, 2, 9, 1, 3};

    std::sort(arr.data(), arr.data() + arr.size());  // Sort array using raw pointers

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 1 2 3 5 9
    }

    return 0;
}