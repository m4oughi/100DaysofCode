#include <iostream>
#include <vector>

int main() {
    std::u8string utf8_text = u8"🚀 Rocket";
    
    std::vector<std::uint8_t> utf8_bytes(utf8_text.begin(), utf8_text.end());

    std::cout << "UTF-8 Byte Sequence: ";
    for (auto byte : utf8_bytes) {
        std::cout << std::hex << +byte << " ";
    }
    std::cout << "\n";

    return 0;
}
