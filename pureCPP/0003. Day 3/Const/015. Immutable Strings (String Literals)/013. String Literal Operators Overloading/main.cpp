#include <iostream>
#include <string>

std::string operator"" _s(const char* str, std::size_t) {
    return std::string(str);
}

int main() {
    std::string myStr = "Hello, World!"_s;
    std::cout << myStr << std::endl; // Prints "Hello, World!"
}
