#include <iostream>
#include <cstddef>

struct Packet {
    std::byte header[2];
    std::byte data[4];
};

int main() {
    Packet p{};
    p.header[0] = std::byte{0xA1};
    p.header[1] = std::byte{0xB2};

    std::cout << "Packet structure initialized!\n";
    return 0;
}
