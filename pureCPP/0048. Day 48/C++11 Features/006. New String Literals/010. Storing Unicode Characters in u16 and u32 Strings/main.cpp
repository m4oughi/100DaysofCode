#include <iostream>

int main() {
    char16_t emoji[] = u"\U0001F600";  // Unicode smiley face (😀)
    char32_t kanji[] = U"漢字";  // Kanji characters

    std::wcout << L"Emoji UTF-16: " << emoji << std::endl;
    std::wcout << L"Kanji UTF-32: " << kanji << std::endl;

    return 0;
}
