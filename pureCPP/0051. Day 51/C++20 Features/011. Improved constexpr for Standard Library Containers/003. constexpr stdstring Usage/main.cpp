#include <string>
#include <iostream>

constexpr std::string make_string() {
    return "Hello, C++20!";
}

int main() {
    constexpr std::string str = make_string();
    std::cout << str << "\n";
}
