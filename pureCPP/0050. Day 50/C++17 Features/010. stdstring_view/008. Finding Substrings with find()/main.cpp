#include <iostream>
#include <string_view>

int main() {
    std::string_view text = "C++17 string_view is fast!";
    
    size_t pos = text.find("fast");
    if (pos != std::string_view::npos) {
        std::cout << "'fast' found at index: " << pos << '\n';
    } else {
        std::cout << "'fast' not found.\n";
    }

    return 0;
}
