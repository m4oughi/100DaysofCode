#include <iostream>

namespace Math::Constants {
    constexpr double PI() { return 3.141592653589793; }
}

int main() {
    std::cout << "Pi: " << Math::Constants::PI() << '\n';
    return 0;
}
