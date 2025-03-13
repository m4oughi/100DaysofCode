#include <iostream>

int main() {
    int x = 0b0001; // 1 in decimal

    std::cout << "x << 1: " << (x << 1) << std::endl; // Left shift (x * 2)
    std::cout << "x << 2: " << (x << 2) << std::endl; // Left shift (x * 4)
    std::cout << "x >> 1: " << (x >> 1) << std::endl; // Right shift (x / 2)

    return 0;
}
