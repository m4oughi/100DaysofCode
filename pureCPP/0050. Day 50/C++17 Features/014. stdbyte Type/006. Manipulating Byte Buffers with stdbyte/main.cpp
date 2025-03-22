#include <iostream>
#include <cstddef>

int main() {
    constexpr size_t bufferSize = 8;
    std::byte buffer[bufferSize] = {};

    buffer[2] = std::byte{0xFF}; // Assigning a byte value
    buffer[4] = buffer[2] >> 2;  // Bitwise right shift

    std::cout << "Buffer manipulation completed!\n";
    return 0;
}
