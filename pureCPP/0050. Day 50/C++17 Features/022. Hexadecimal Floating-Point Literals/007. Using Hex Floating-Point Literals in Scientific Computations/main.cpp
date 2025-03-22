#include <iostream>

double computeEnergy(double mass) {
    constexpr double speedOfLight = 0x1.86a0p+29; // ~299,792,458 m/s in hex
    return mass * speedOfLight * speedOfLight;
}

int main() {
    double mass = 1.0; // 1 kg
    std::cout << "Energy (E=mc^2) for 1kg: " << computeEnergy(mass) << " Joules\n";
    return 0;
}
