#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    if (arr.empty()) {
        std::cout << "Array is empty." << std::endl;
    } else {
        std::cout << "Array is not empty." << std::endl;  // Output: Array is not empty.
    }

    return 0;
}