#include <iostream>
using namespace std;

namespace Physics {
    class Constants {
    public:
        static const double speedOfLight;  // Static constant inside a namespace
    };
}

// Definition of the constant outside the class and namespace
const double Physics::Constants::speedOfLight = 299792458;

int main() {
    // Accessing the static constant within a namespace
    cout << "Speed of Light: " << Physics::Constants::speedOfLight << " m/s" << endl;  // Output: 299792458 m/s
    return 0;
}
