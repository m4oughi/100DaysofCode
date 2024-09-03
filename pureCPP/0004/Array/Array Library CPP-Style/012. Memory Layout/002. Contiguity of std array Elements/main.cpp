#include <iostream>
#include <array>

int main() {
    std::array<int, 4> arr = {10, 20, 30, 40};
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << "Element " << i << " address: " << &arr[i] << std::endl;
    }
    // Check if elements are stored contiguously
    if (&arr[1] == &arr[0] + 1) {
        std::cout << "Elements are stored contiguously." << std::endl;
    }

    return 0;
}