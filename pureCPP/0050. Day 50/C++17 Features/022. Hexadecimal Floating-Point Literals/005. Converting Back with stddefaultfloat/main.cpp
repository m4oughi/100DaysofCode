#include <iostream>
#include <iomanip>

int main() {
    double val = 0x1.2p4; // (1.125) * 16 = 18.0
    std::cout << "Hexfloat format: " << std::hexfloat << val << "\n";
    std::cout << "Back to default: " << std::defaultfloat << val << "\n";
    return 0;
}
