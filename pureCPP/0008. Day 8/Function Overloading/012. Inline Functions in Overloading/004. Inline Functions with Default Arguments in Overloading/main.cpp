#include <iostream>
using namespace std;

class Operations {
public:
    // Inline addition with default argument
    inline int add(int a, int b = 10) {
        return a + b;
    }

    // Overloaded function for doubles
    inline double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Operations ops;
    cout << "Sum (int, default b=10): " << ops.add(5) << endl;  // Uses default argument
    cout << "Sum (int, b provided): " << ops.add(5, 15) << endl; // Argument provided
    cout << "Sum (double): " << ops.add(2.5, 3.5) << endl;      // Calls double version
    return 0;
}
