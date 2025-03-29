#include <iostream>
#include <string_view>

void print_utf8(std::u8string_view text) {
    std::cout << reinterpret_cast<const char*>(text.data()) << "\n";
}

int main() {
    print_utf8(u8"🌎 UTF-8 String View");
    return 0;
}
