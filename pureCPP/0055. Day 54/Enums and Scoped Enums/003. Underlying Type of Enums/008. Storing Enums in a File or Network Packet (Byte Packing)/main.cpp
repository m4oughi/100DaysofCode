#include <iostream>
#include <cstdint>

enum class PacketType : uint8_t {
    Login = 1,
    Logout = 2,
    Data = 3
};

void sendPacket(PacketType type) {
    uint8_t raw = static_cast<uint8_t>(type);
    std::cout << "Sending packet of type: " << (int)raw << std::endl;
}

int main() {
    sendPacket(PacketType::Data);
}
