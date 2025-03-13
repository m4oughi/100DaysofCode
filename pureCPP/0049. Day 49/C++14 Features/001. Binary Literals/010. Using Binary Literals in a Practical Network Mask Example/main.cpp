#include <iostream>

int main() {
    const int IP = 0b11000000101010000000000100000001; // 192.168.1.1
    const int MASK = 0b11111111111111111111111100000000; // Subnet mask

    int network = IP & MASK; // Get network address
    std::cout << "Network Address (Decimal): " << network << std::endl;

    return 0;
}
