#include <iostream>
#include <fstream>
#include <cstdint>

enum class Command : uint16_t {
    Ping = 1,
    Pong = 2
};

void serialize(Command cmd, const std::string& filename) {
    std::ofstream out(filename, std::ios::binary);
    uint16_t val = static_cast<uint16_t>(cmd);
    out.write(reinterpret_cast<char*>(&val), sizeof(val));
    out.close();
}

int main() {
    serialize(Command::Ping, "command.bin");
}
