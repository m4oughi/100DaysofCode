#include <iostream>

bool isBitSet(int number, int bit) {
    return (number & (1 << bit)) != 0;
}

int main() {
    int number = 0b101101; // 45 in decimal

    std::cout << "Is bit 0 set? " << isBitSet(number, 0) << std::endl;
    std::cout << "Is bit 3 set? " << isBitSet(number, 3) << std::endl;
    std::cout << "Is bit 5 set? " << isBitSet(number, 5) << std::endl;

    return 0;
}
