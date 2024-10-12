#include <iostream>
using namespace std;

class MathConstants {
public:
    static const double PI;  // Declaration of static constant
};

// Definition of static constant outside the class
const double MathConstants::PI = 3.14159;

int main() {
    // Accessing static constant without creating an object
    cout << "Value of PI: " << MathConstants::PI << endl;  // Output: 3.14159
    return 0;
}
