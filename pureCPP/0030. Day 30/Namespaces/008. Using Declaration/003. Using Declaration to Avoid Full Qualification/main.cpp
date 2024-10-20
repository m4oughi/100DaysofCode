#include <iostream>

namespace Physics {
    void simulateGravity() {
        std::cout << "Simulating gravity..." << std::endl;
    }

    void simulateFriction() {
        std::cout << "Simulating friction..." << std::endl;
    }
}

int main() {
    using Physics::simulateGravity;  // No need for `Physics::simulateGravity`
    
    simulateGravity();  // Direct call
    Physics::simulateFriction();  // Using full qualification for friction
    return 0;
}
