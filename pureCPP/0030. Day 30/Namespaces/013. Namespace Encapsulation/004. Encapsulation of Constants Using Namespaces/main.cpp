#include <iostream>

namespace Physics {
    const double gravity = 9.8;
}

namespace Chemistry {
    const double gravity = 9.81;  // Different constant with the same name
}

int main() {
    std::cout << "Physics gravity: " << Physics::gravity << std::endl;
    std::cout << "Chemistry gravity: " << Chemistry::gravity << std::endl;
    return 0;
}
