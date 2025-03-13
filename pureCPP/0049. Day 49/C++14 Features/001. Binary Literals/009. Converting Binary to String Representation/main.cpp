#include <iostream>
#include <bitset>

int main() {
    int number = 0b11010101; // 213 in decimal

    std::bitset<8> binary(number);
    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}
