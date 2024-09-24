#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {1, 2, 3};
    std::cout << "Size of array: " << sizeof(arr) << " bytes" << std::endl;  // Output: Size of array: 12 bytes (on most systems)
    std::cout << "Address of arr: " << &arr << std::endl;
    std::cout << "Address of arr[0]: " << &arr[0] << std::endl;
    std::cout << "Address of arr[1]: " << &arr[1] << std::endl;
    std::cout << "Address of arr[2]: " << &arr[2] << std::endl;

    return 0;
}