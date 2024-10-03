#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m) : meters(m) {}

    // Convert Distance to int
    operator int() const {
        return meters;
    }

    // Convert Distance to double
    operator double() const {
        return meters * 0.001;  // Convert to kilometers
    }
};

int main() {
    Distance d(1000);
    int distInMeters = d;         // Implicit conversion to int
    double distInKm = d;          // Implicit conversion to double
    cout << "Distance in meters: " << distInMeters << endl;  // Output: 1000
    cout << "Distance in kilometers: " << distInKm << endl;  // Output: 1.0
    return 0;
}
