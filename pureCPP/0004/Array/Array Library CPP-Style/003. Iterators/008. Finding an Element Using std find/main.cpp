#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    auto it = std::find(arr.begin(), arr.end(), 30);  // Find element with value 30

    if (it != arr.end()) {
        std::cout << "Element found: " << *it << std::endl;  // Output: Element found: 30
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}