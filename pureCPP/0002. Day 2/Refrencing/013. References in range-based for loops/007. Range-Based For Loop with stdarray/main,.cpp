#include <iostream>
#include <array>

int main() {
    std::array<int, 4> arr = {5, 10, 15, 20};

    for (auto& num : arr) {  // auto& deduces that num is an l-value reference
        num -= 2;  // Modify each element in the array
    }

    for (const auto& num : arr) {
        std::cout << num << " ";  // Output: 3 8 13 18
    }
}
