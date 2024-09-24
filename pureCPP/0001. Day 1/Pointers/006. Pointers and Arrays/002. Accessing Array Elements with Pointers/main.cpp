#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;  // Pointer to the first element

    std::cout << "First element: " << *ptr << std::endl;      // Output: 10
    std::cout << "Second element: " << *(ptr + 1) << std::endl;  // Output: 20
    std::cout << "Third element: " << *(ptr + 2) << std::endl;   // Output: 30

    return 0;
}
