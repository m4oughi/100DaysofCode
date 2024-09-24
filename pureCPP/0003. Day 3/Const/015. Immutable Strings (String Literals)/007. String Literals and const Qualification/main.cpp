#include <iostream>

int main() {
    const char* str = "Hello, World!";
    char* nonConstStr = const_cast<char*>(str); // Cast away constness (dangerous)

    // nonConstStr[0] = 'h'; // Undefined behavior: modifying a string literal
    std::cout << str << std::endl; // Prints "Hello, World!"
}
