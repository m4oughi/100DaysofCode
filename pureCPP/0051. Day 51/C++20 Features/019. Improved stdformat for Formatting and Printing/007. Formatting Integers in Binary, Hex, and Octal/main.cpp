#include <iostream>
#include <format>

int main() {
    int number = 42;

    std::cout << std::format("Decimal: {}\n", number);
    std::cout << std::format("Binary: {:#b}\n", number);
    std::cout << std::format("Octal: {:#o}\n", number);
    std::cout << std::format("Hexadecimal: {:#x}\n", number);
    std::cout << std::format("Uppercase Hex: {:#X}\n", number);

    return 0;
}
