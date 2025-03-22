#include <iostream>
#include <cstddef>

int main() {
    std::byte byteArray[4] = {std::byte{0x1}, std::byte{0x2}, std::byte{0x3}, std::byte{0x4}};

    std::cout << "Byte array initialized successfully!\n";
    return 0;
}
