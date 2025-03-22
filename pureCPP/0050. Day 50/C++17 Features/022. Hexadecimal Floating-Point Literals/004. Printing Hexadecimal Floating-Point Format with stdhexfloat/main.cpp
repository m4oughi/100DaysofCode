#include <iostream>
#include <iomanip>

int main() {
    double val = 10.75;
    std::cout << "Decimal: " << val << "\n";
    std::cout << "Hexadecimal float: " << std::hexfloat << val << "\n";
    return 0;
}
