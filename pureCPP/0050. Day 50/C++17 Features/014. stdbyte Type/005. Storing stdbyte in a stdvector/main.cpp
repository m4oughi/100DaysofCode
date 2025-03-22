#include <iostream>
#include <vector>
#include <cstddef>

int main() {
    std::vector<std::byte> byteVec = {std::byte{0xAA}, std::byte{0xBB}, std::byte{0xCC}};

    std::cout << "Vector of bytes stored successfully!\n";
    return 0;
}
