#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;
    arr.fill(10);  // Fill all elements with 10

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 10 10 10 10 10
    }
    std::cout << std::endl;

    return 0;
}