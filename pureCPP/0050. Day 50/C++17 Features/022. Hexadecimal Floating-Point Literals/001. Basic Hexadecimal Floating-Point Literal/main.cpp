#include <iostream>

int main() {
    double hexFloat = 0x1.2p3; // (1.2 in hex) * 2^3 = (1 + 2/16) * 8 = 1.125 * 8 = 9.0
    std::cout << "Hexadecimal floating-point: " << hexFloat << std::endl;
    return 0;
}
