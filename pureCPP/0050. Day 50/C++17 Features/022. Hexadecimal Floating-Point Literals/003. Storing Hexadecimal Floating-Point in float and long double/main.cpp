#include <iostream>

int main() {
    float hexFloatF = 0x1.8p1f; // 1.5 * 2^1 = 3.0 (suffix 'f' for float)
    long double hexFloatLD = 0x1.2p10L; // (1.125) * 1024 = 1152 (suffix 'L' for long double)

    std::cout << "Hex float (float): " << hexFloatF << std::endl;
    std::cout << "Hex float (long double): " << hexFloatLD << std::endl;
    return 0;
}
