#include <iostream>
#include <memory>

int main() {
    // Create a unique_ptr to manage a dynamically allocated array
    std::unique_ptr<int[]> arr(new int[5]);

    // Initialize the array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }

    // Access the array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }

    // No need to explicitly delete the array; it is automatically managed by unique_ptr

    return 0;
}
