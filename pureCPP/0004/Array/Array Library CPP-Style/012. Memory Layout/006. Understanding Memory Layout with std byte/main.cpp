#include <iostream>
#include <array>
#include <cstddef> // For std::byte

int main() {
    std::array<std::byte, 4> arr = {std::byte{0x1}, std::byte{0x2}, std::byte{0x3}, std::byte{0x4}};

    std::cout << "Array size in bytes: " << sizeof(arr) << std::endl;
    std::cout << "Memory content as integer values: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << std::to_integer<int>(arr[i]) << " ";
    }
    std::cout << std::endl;

    return 0;
}