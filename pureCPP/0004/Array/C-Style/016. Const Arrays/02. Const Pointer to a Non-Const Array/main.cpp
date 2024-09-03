#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    int* const ptr = arr;  // Const pointer to a non-const array

    // Access and modify elements via pointer
    ptr[0] = 15;  // Modifies the first element
    ptr[1] = 25;  // Modifies the second element

    // Print modified array
    for (int i = 0; i < 3; ++i) {
        std::cout << arr[i] << " ";  // Outputs: 15 25 30
    }
    std::cout << std::endl;

    // ptr = nullptr;  // Error: Cannot change the const pointer
}
