#include <iostream>
#include <string_view>

int main() {
    std::string_view str1 = "Hello";
    std::string_view str2 = "World";
    std::string_view str3 = "Hello";

    std::cout << (str1 == str2 ? "Equal" : "Not Equal") << '\n';
    std::cout << (str1 == str3 ? "Equal" : "Not Equal") << '\n';

    return 0;
}
