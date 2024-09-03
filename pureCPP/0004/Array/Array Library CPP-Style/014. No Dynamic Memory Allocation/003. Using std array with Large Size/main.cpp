#include <iostream>
#include <array>

int main() {
    // Large array of 100,000 integers
    std::array<int, 100000> arr;
    std::cout << "Array created with size: " << arr.size() << std::endl;

    // Check memory allocation status
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;  // Outputs: 0, 10, 20, 30, 40
    }

    return 0;
}