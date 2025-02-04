#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 6> arr = {10, 20, 30, 40, 50, 60};

    int key = 40;

    // Perform binary search
    if (std::binary_search(arr.begin(), arr.end(), key)) {
        std::cout << "Element " << key << " found in the array.\n";
    } else {
        std::cout << "Element not found.\n";
    }

    return 0;
}
