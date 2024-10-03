#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m) : meters(m) {}

    // Overload the type conversion operator to convert Distance to int
    operator int() const {
        return meters;
    }
};

int main() {
    Distance d(100);
    int distInMeters = d;  // Implicit conversion from Distance to int
    cout << "Distance in meters: " << distInMeters << endl;  // Output: 100
    return 0;
}
