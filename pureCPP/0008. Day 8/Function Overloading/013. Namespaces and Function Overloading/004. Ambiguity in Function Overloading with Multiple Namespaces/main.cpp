#include <iostream>
using namespace std;

namespace MathOperations {
    int subtract(int a, int b) {
        return a - b;
    }
}

namespace PhysicsOperations {
    double subtract(double a, double b) {
        return a - b;
    }
}

int main() {
    using namespace MathOperations;
    using namespace PhysicsOperations;

    // This will cause ambiguity because both namespaces have a function named subtract
    // cout << subtract(5, 3) << endl;  // Error: ambiguous call to subtract
    // cout << subtract(5.5, 2.5) << endl; // Error: ambiguous call to subtract

    // To resolve ambiguity, explicitly specify the namespace
    cout << "Math Subtract: " << MathOperations::subtract(5, 3) << endl;
    cout << "Physics Subtract: " << PhysicsOperations::subtract(5.5, 2.5) << endl;

    return 0;
}
