#include <iostream>

int main() {
    const int arr[3] = {10, 20, 30};
    const int* const ptr = arr;  // Const pointer to a const array

    // Access elements via pointer
    for (int i = 0; i < 3; ++i) {
        std::cout << ptr[i] << " ";  // Outputs: 10 20 30
    }
    std::cout << std::endl;

    // ptr[0] = 15;  // Error: Cannot modify a const array
    // ptr = nullptr;  // Error: Cannot change a const pointer
}
