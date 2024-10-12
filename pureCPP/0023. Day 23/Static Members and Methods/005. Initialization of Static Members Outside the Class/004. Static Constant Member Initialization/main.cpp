#include <iostream>
using namespace std;

class Physics {
public:
    static const double gravity;  // Static constant member
};

// Initialize static constant member outside the class
const double Physics::gravity = 9.8;

int main() {
    // Access static constant via class name
    cout << "Gravitational constant: " << Physics::gravity << endl;  // Output: 9.8
    return 0;
}
