#include <iostream>
#include <string>
#include <string_view>

void print(std::string_view sv) {
    std::cout << "Received string: " << sv << '\n';
}

int main() {
    std::string str = "Efficient passing!";
    print(str);  // No copy is made
    print("Hello, World!");  // Works with string literals

    return 0;
}
