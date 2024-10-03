#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m) : meters(m) {}

    // Overload the explicit type conversion operator
    explicit operator int() const {
        return meters;
    }
};

int main() {
    Distance d(100);
    // int distInMeters = d;  // Error: implicit conversion not allowed
    int distInMeters = static_cast<int>(d);  // Explicit conversion
    cout << "Distance in meters: " << distInMeters << endl;  // Output: 100
    return 0;
}
