#include <iostream>

int main() {
    const std::string &ref = std::string("Hello, world!");  // Binds to temporary string
    std::cout << ref << std::endl;  // OK: temporary's lifetime extended

    return 0;
}