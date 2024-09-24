#include <iostream>
using namespace std;

namespace MathOperations {
    int multiply(int a, int b) {
        return a * b;
    }
}

namespace PhysicsOperations {
    double multiply(double a, double b) {
        return a * b;
    }
}

int main() {
    cout << "Math Multiply (int): " << MathOperations::multiply(3, 4) << endl;
    cout << "Physics Multiply (double): " << PhysicsOperations::multiply(3.5, 2.5) << endl;
    return 0;
}
