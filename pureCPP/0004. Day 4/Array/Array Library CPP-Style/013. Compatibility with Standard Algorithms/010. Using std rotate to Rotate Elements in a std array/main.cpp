#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 6> arr = {1, 2, 3, 4, 5, 6};
    std::rotate(arr.begin(), arr.begin() + 2, arr.end());  // Rotating the array left by 2 positions

    std::cout << "Rotated array: ";
    for (const int& n : arr) {
        std::cout << n << " ";  // Output: 3 4 5 6 1 2
    }
    std::cout << std::endl;
    return 0;
}