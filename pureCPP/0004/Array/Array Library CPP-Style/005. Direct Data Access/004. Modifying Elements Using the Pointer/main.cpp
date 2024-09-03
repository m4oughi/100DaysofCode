#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    int* ptr = arr.data();  // Get pointer to the underlying array
    ptr[2] = 100;  // Modify the third element

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 10 20 100 40 50
    }

    return 0;
}