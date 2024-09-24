#include <array>
#include <algorithm>
#include <iostream>

int main() {
    std::array<int, 5> arr = {7, 8, 9, 10, 11};
    auto it = std::find(arr.begin(), arr.end(), 9);  // Finding the element 9

    if (it != arr.end()) {
        std::cout << "Element found: " << *it << std::endl;  // Output: Element found: 9
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
