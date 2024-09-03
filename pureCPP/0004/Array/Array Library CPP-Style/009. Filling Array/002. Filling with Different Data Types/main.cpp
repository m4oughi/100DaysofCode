#include <iostream>
#include <array>

int main() {
    std::array<char, 4> arr;
    arr.fill('A');  // Fill all elements with 'A'

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: A A A A
    }
    std::cout << std::endl;

    return 0;
}