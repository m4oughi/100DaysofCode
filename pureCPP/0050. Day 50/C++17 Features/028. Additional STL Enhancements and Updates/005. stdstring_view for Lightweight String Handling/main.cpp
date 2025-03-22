#include <iostream>
#include <string_view>

void print(std::string_view sv) {
    std::cout << "StringView: " << sv << "\n";
}

int main() {
    std::string str = "Hello, C++17!";
    print(str); // Passes lightweight view, avoiding copy
    print("Temporary String"); // Works with string literals

    return 0;
}
