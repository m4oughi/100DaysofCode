#include <iostream>
#include <bitset>

int main() {
    constexpr std::bitset<8> bits("10101010");

    std::cout << bits << std::endl; // Prints 10101010
}
