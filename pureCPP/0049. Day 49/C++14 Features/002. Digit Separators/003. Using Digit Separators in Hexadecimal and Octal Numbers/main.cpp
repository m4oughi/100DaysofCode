#include <iostream>

int main() {
    int hexValue = 0xFF'00'FF; // Hexadecimal with separators
    int octalValue = 07'777;   // Octal with separators

    std::cout << "Hexadecimal value: " << hexValue << std::endl;
    std::cout << "Octal value: " << octalValue << std::endl;

    return 0;
}
