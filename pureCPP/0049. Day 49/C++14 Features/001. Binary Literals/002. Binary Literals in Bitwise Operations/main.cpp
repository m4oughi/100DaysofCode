#include <iostream>

int main() {
    int a = 0b1100; // 12 in decimal
    int b = 0b1010; // 10 in decimal

    std::cout << "a & b = " << (a & b) << std::endl; // Bitwise AND
    std::cout << "a | b = " << (a | b) << std::endl; // Bitwise OR
    std::cout << "a ^ b = " << (a ^ b) << std::endl; // Bitwise XOR

    return 0;
}
