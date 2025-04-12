#include <cstdint>

enum class PacketType : uint8_t {
    Ack = 0x01,
    Nack = 0x02
};

static_assert(sizeof(PacketType) == 1, "PacketType must be 1 byte");

int main() {
    PacketType pkt = PacketType::Ack;
}
