#include <iostream>
#include <string>

int main() {
    std::string utf8_text = u8"こんにちは"; // Japanese for "Hello"

    std::cout << "UTF-8 Text: " << utf8_text << std::endl;

    return 0;
}
