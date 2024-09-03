#include <iostream>

int main() {
    const int arr[5] = {1, 2, 3, 4, 5};  // Const array of integers

    // Access and print elements
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";  // Outputs: 1 2 3 4 5
    }
    std::cout << std::endl;

    // arr[0] = 10;  // Error: Cannot modify a const array
}
