#include <iostream>
using namespace std;

class PhysicsConstants {
public:
    static const double gravity;  // Static constant data member

    static void showGravity() {  // Static member function
        cout << "Gravitational constant: " << gravity << endl;
    }
};

// Initialize static constant data member
const double PhysicsConstants::gravity = 9.8;

int main() {
    PhysicsConstants::showGravity();  // Output: Gravitational constant: 9.8
    return 0;
}
