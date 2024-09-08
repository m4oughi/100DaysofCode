#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr;

    for (size_t i = 0; i < arr.size(); ++i) {
        arr[i] = static_cast<int>(i * 10);  // Assign i * 10 to each element
    }

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 0 10 20 30 40
    }

    return 0;
}