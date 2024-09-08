#include <iostream>

int main() {
    constexpr int arr[4] = {1, 2, 3, 4};  // Constexpr array, evaluated at compile-time

    // Access and print elements
    for (int i = 0; i < 4; ++i) {
        std::cout << arr[i] << " ";  // Outputs: 1 2 3 4
    }
    std::cout << std::endl;

    // arr[0] = 5;  // Error: Cannot modify a constexpr array
}
