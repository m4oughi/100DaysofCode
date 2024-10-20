#include <iostream>

namespace Engine {
    void start(int horsepower) {
        std::cout << "Starting engine with " << horsepower << " horsepower" << std::endl;
    }

    void start(double fuelLevel) {
        std::cout << "Starting engine with " << fuelLevel << " liters of fuel" << std::endl;
    }
}

namespace Simulation {
    void start() {
        std::cout << "Starting simulation" << std::endl;
    }
}

int main() {
    using namespace Engine;
    start(150);  // Overload with integer argument
    start(30.5);  // Overload with double argument

    using namespace Simulation;
    Simulation::start();  // Avoid ambiguity by fully qualifying
    return 0;
}
