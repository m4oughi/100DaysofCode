#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;

    for (size_t i = 0; i < arr.size(); ++i) {
        arr[i] = i * i;  // Fill with squares of indices
    }

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 0 1 4 9 16
    }
    std::cout << std::endl;

    return 0;
}