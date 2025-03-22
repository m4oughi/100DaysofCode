#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string str = "Hello, C++17!";
    std::string_view view = str;  // Implicit conversion

    std::cout << "Original string: " << str << '\n';
    std::cout << "String view: " << view << '\n';

    return 0;
}
