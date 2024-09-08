#include <iostream>
#include <array>
#include <algorithm>  // For std::fill

int main() {
    std::array<int, 5> arr;

    std::fill(arr.begin(), arr.end(), 5);  // Assign 5 to all elements using std::fill

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 5 5 5 5 5
    }

    return 0;
}