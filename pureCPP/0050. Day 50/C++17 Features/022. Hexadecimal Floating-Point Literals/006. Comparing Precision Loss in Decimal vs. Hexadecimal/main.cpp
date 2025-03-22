#include <iostream>
#include <cmath>

int main() {
    double decValue = 0.1; // Approximate in binary
    double hexValue = 0x1.999999999999ap-4; // Exact representation of 0.1 in IEEE 754

    std::cout << "Decimal 0.1 stored: " << decValue << std::endl;
    std::cout << "Exact IEEE 754 Hex Representation: " << hexValue << std::endl;
    std::cout << "Difference: " << std::abs(decValue - hexValue) << std::endl;

    return 0;
}
