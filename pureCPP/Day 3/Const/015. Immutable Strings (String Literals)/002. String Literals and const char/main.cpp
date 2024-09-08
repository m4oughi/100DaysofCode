#include <iostream>

int main() {
    const char* str = "Hello, World!";
    // str[0] = 'h'; // Error: cannot modify read-only location

    std::cout << str << std::endl; // Prints "Hello, World!"
}
