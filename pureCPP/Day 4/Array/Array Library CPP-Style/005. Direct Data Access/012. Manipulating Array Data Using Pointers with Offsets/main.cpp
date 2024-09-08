#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    int* ptr = arr.data();
    *(ptr + 2) += 15;  // Increase the third element by 15

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 10 20 45 40 50
    }

    return 0;
}