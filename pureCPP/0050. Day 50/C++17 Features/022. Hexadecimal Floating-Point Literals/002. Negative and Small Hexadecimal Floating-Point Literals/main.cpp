#include <iostream>

int main() {
    double negHexFloat = -0x1.Cp2; // -1.C (1.75 in decimal) * 2^2 = -7.0
    double smallHexFloat = 0x1.4p-2; // (1.25 in decimal) * 2^-2 = 0.3125

    std::cout << "Negative hex float: " << negHexFloat << std::endl;
    std::cout << "Small hex float: " << smallHexFloat << std::endl;
    return 0;
}
