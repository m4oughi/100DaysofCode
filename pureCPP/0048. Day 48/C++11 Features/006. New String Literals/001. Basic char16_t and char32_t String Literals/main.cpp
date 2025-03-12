#include <iostream>

int main() {
    char16_t u16_str[] = u"Hello, UTF-16!";
    char32_t u32_str[] = U"Hello, UTF-32!";

    std::wcout << "UTF-16 string length: " << std::char_traits<char16_t>::length(u16_str) << std::endl;
    std::wcout << "UTF-32 string length: " << std::char_traits<char32_t>::length(u32_str) << std::endl;

    return 0;
}
