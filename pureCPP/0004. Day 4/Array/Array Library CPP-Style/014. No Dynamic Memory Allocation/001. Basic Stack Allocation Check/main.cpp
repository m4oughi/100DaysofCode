#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {1, 2, 3};
    std::cout << "Address of array: " << &arr << std::endl;
    std::cout << "Address of first element: " << &arr[0] << std::endl;

    return 0;
}