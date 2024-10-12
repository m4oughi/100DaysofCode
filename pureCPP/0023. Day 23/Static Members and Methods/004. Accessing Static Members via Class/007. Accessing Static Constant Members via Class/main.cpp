#include <iostream>
using namespace std;

class Physics {
public:
    static const double gravity;  // Static constant data member
};

// Initialize static constant data member
const double Physics::gravity = 9.8;

int main() {
    // Access static constant via class
    cout << "Gravitational constant: " << Physics::gravity << endl;  // Output: 9.8
    return 0;
}
