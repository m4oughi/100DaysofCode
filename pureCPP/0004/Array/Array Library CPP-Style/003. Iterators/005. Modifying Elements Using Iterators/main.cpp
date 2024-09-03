#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    for (auto it = arr.begin(); it != arr.end(); ++it) {
        *it *= 2;  // Modify each element
    }

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 20 40 60 80 100
    }

    return 0;
}