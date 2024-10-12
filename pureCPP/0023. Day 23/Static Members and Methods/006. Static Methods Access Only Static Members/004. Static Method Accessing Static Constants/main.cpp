#include <iostream>
using namespace std;

class MathConstants {
public:
    static const double PI;  // Static constant

    static void displayPI() {
        cout << "Value of PI: " << PI << endl;  // Static method accessing static constant
    }
};

// Define static constant outside the class
const double MathConstants::PI = 3.14159;

int main() {
    MathConstants::displayPI();  // Output: Value of PI: 3.14159

    return 0;
}
