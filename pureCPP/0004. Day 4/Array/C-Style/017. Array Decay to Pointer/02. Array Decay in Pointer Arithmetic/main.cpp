#include <iostream>

int main() {
    int arr[4] = {10, 20, 30, 40};
    int* ptr = arr;  // Array decays to a pointer

    // Access elements using pointer arithmetic
    std::cout << *ptr << " ";       // Outputs: 10 (arr[0])
    std::cout << *(ptr + 1) << " "; // Outputs: 20 (arr[1])
    std::cout << *(ptr + 2) << " "; // Outputs: 30 (arr[2])
    std::cout << *(ptr + 3) << std::endl; // Outputs: 40 (arr[3])
}
