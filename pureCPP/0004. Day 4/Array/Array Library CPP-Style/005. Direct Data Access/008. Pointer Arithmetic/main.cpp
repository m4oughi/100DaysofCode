#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    int* ptr = arr.data();
    *(ptr + 1) = 10;  // Modify the second element using pointer arithmetic

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 1 10 3 4 5
    }

    return 0;
}