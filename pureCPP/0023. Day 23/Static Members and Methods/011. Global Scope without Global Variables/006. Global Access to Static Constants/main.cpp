#include <iostream>
using namespace std;

class MathConstants {
public:
    static const double PI;   // Static constant
    static const double E;    // Static constant
};

// Define static constants outside the class
const double MathConstants::PI = 3.14159;
const double MathConstants::E = 2.71828;

int main() {
    // Accessing static constants globally
    cout << "Value of PI: " << MathConstants::PI << endl;  // Output: 3.14159
    cout << "Value of E: " << MathConstants::E << endl;    // Output: 2.71828
    return 0;
}
