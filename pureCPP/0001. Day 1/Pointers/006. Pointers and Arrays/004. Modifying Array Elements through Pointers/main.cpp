#include <iostream>

int main() {
    int arr[3] = {1, 2, 3};
    int* ptr = arr;  // Pointer to the first element of the array

    // Modifying elements through the pointer
    *(ptr + 1) = 20;  // Change the second element to 20
    *(ptr + 2) = 30;  // Change the third element to 30

    // Output modified array
    for (int i = 0; i < 3; ++i) {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }

    return 0;
}
