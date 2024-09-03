#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {5, 10, 15, 20, 25};

    // Output address of the array and its elements
    std::cout << "Address of array object: " << &arr << std::endl;
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << "Address of element arr[" << i << "]: " << &arr[i] << std::endl;
    }

    return 0;
}