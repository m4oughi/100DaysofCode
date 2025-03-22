#include <iostream>
#include <string_view>

int main() {
    std::string_view view = "Hello, C++17!";
    std::string_view subview = view.substr(7, 5);  // "C++17"

    std::cout << "Substring: " << subview << '\n';

    return 0;
}
