#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::reverse(arr.begin(), arr.end());  // Reversing the array elements

    std::cout << "Reversed array: ";
    for (const int& n : arr) {
        std::cout << n << " ";  // Output: 5 4 3 2 1
    }
    std::cout << std::endl;

    return 0;
}