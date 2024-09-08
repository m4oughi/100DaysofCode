#include <iostream>

int main() {
    const int arr[] = {100, 200, 300, 400};

    std::size_t size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Size of array: " << size << std::endl; // Prints 4
}
