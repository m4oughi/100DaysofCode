#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {30, 10, 50, 20, 40};

    // Sort the array
    std::sort(arr.begin(), arr.end());

    for (int i : arr) std::cout << i << " ";
    std::cout << "\n";

    // Find an element
    auto it = std::find(arr.begin(), arr.end(), 20);
    if (it != arr.end()) {
        std::cout << "Element 20 found at index: " << std::distance(arr.begin(), it) << "\n";
    } else {
        std::cout << "Element not found\n";
    }

    return 0;
}
