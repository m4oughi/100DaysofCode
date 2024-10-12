#include <iostream>
using namespace std;

class Physics {
public:
    static const double gravity;  // Shared static constant
};

// Initialize static constant
const double Physics::gravity = 9.8;

int main() {
    cout << "Gravitational constant: " << Physics::gravity << endl;  // Output: 9.8
    return 0;
}
