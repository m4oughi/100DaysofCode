#include <iostream>
using namespace std;

class Circle {
public:
    static const int maxRadius = 100;  // Static constant initialized inside the class
};

int main() {
    // Accessing the static constant
    cout << "Maximum allowed radius: " << Circle::maxRadius << endl;  // Output: 100
    return 0;
}
