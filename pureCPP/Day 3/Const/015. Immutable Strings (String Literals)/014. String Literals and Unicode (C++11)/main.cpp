#include <iostream>

int main() {
    const char* unicodeStr = R"(Hello, 世界!)";
    std::cout << unicodeStr << std::endl; // Prints "Hello, 世界!"
}
