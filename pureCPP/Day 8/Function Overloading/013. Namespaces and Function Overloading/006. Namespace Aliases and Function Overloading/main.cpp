#include <iostream>
using namespace std;

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
}

namespace PhysicsOperations {
    int add(int a, int b) {
        return a + b + 100;  // Different logic for physics calculations
    }
}

int main() {
    namespace mathOps = MathOperations;
    namespace physOps = PhysicsOperations;

    cout << "Math Add: " << mathOps::add(5, 6) << endl;    // Uses MathOperations::add
    cout << "Physics Add: " << physOps::add(5, 6) << endl; // Uses PhysicsOperations::add

    return 0;
}
