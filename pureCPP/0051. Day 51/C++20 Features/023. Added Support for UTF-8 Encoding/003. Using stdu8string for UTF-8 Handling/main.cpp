#include <iostream>
#include <string>

int main() {
    std::u8string utf8_text = u8"こんにちは (Hello in Japanese)";
    std::cout << reinterpret_cast<const char*>(utf8_text.c_str()) << "\n";
    return 0;
}
