#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;

    arr.fill(7);  // Assign 7 to all elements

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 7 7 7 7 7
    }

    return 0;
}