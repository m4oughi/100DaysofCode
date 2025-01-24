#include <iostream>
#include <array>
#include <numeric>

int main() {
    std::array<int, 5> arr;
    std::iota(arr.begin(), arr.end(), 10);

    std::cout << "Array values: ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << "\n"; // Output: 10 11 12 13 14

    return 0;
}
