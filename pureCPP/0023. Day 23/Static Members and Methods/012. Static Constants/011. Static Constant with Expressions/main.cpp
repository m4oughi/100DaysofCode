#include <iostream>
using namespace std;

class PhysicsConstants {
public:
    static const double gravity;        // Earth's gravity (m/s^2)
    static const double escapeVelocity; // Calculated using gravity

    // Static constant calculation (sqrt(2 * gravity * radius))
    static const double earthRadius;
};

// Define constants and expressions outside the class
const double PhysicsConstants::gravity = 9.81;
const double PhysicsConstants::earthRadius = 6371000;
const double PhysicsConstants::escapeVelocity = sqrt(2 * PhysicsConstants::gravity * PhysicsConstants::earthRadius);

int main() {
    cout << "Escape velocity on Earth: " << PhysicsConstants::escapeVelocity << " m/s" << endl;
    return 0;
}
