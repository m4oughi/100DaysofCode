#include <iostream>
#include <span>

void print_utf8(std::span<const char8_t> text) {
    std::cout << reinterpret_cast<const char*>(text.data()) << "\n";
}

int main() {
    std::u8string utf8_text = u8"🎵 UTF-8 with std::span";
    print_utf8({utf8_text.data(), utf8_text.size()});
    return 0;
}
