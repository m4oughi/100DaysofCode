#include <iostream>
#include <string>
#include <memory>

int main() {
    auto customAllocator = std::allocator<char>();

    std::basic_string<char, std::char_traits<char>, decltype(customAllocator)> str("Hello, World!", customAllocator);

    std::cout << str << std::endl; // Prints "Hello, World!"
}
