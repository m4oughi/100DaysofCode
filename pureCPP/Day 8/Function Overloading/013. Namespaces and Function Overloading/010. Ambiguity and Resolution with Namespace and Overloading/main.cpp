#include <iostream>
using namespace std;

namespace MathOperations {
    void calculate(int x) {
        cout << "MathOperations calculate(int): " << x << endl;
    }
}

namespace PhysicsOperations {
    void calculate(int x) {
        cout << "PhysicsOperations calculate(int): " << x + 100 << endl;
    }
}

int main() {
    using MathOperations::calculate;
    using PhysicsOperations::calculate; // Ambiguous now

    // Uncommenting either of the below lines will cause ambiguity
    // calculate(5);

    // To resolve ambiguity, specify the namespace explicitly
    MathOperations::calculate(5);
    PhysicsOperations::calculate(5);

    return 0;
}
