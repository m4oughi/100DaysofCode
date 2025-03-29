#include <iostream>
#include <locale>
#include <codecvt>

int main() {
    std::u8string utf8_text = u8"你好 (Hello in Chinese)";

    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> convert;
    std::u16string utf16_text = convert.from_bytes(reinterpret_cast<const char*>(utf8_text.c_str()));

    std::cout << "UTF-8 to UTF-16 conversion done!\n";
    return 0;
}
