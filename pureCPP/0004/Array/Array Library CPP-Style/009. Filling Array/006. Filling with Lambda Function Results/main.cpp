#include <iostream>
#include <array>
#include <functional>

int main() {
    std::array<int, 5> arr;

    int value = 1;
    std::generate(arr.begin(), arr.end(), [&value]() { return value *= 2; });  // Fill with powers of 2

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 2 4 8 16 32
    }
    std::cout << std::endl;

    return 0;
}