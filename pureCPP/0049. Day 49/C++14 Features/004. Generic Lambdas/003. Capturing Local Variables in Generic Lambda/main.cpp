#include <iostream>

int main() {
    int factor = 2;
    auto multiplyByFactor = [factor](auto value) { return value * factor; };

    std::cout << "Multiply by factor: " << multiplyByFactor(5) << std::endl;

    return 0;
}
