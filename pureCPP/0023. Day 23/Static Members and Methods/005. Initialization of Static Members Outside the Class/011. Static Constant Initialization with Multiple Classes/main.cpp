#include <iostream>
using namespace std;

class Physics {
public:
    static const double gravity;  // Static constant in one class
};

const double Physics::gravity = 9.8;  // Initialize constant outside class

class Math {
public:
    static const double pi;  // Static constant in another class
};

const double Math::pi = 3.14159;  // Initialize constant outside class

int main() {
    cout << "Gravitational constant: " << Physics::gravity << endl;  // Output: 9.8
    cout << "Value of pi: " << Math::pi << endl;  // Output: 3.14159
    return 0;
}
