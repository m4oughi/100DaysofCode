#include <iostream>
using namespace std;

class PhysicsConstants {
public:
    static const double gravity;  // Static constant for gravity
};

class MathConstants {
public:
    static const double PI;       // Static constant for PI
};

// Definition of static constants
const double PhysicsConstants::gravity = 9.81;
const double MathConstants::PI = 3.14159;

int main() {
    // Accessing static constants from different classes
    cout << "Gravity: " << PhysicsConstants::gravity << " m/s^2" << endl;  // Output: 9.81 m/s^2
    cout << "Value of PI: " << MathConstants::PI << endl;  // Output: 3.14159
    return 0;
}
