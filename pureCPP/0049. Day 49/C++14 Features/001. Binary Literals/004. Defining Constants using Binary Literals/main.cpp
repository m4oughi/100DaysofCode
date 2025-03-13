#include <iostream>

constexpr int MASK = 0b11110000; // Binary mask

int main() {
    int value = 0b10101010; // 170 in decimal

    int result = value & MASK; // Apply mask
    std::cout << "Masked value: " << result << std::endl;

    return 0;
}
