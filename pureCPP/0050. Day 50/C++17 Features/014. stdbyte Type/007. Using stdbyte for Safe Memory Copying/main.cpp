#include <iostream>
#include <cstring>
#include <cstddef>

int main() {
    std::byte source[4] = {std::byte{0x11}, std::byte{0x22}, std::byte{0x33}, std::byte{0x44}};
    std::byte destination[4];

    std::memcpy(destination, source, sizeof(source));

    std::cout << "Memory copied successfully using std::byte!\n";
    return 0;
}
