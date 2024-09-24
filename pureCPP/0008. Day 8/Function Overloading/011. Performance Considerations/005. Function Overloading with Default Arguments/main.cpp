#include <iostream>
using namespace std;

class Operations {
public:
    // Function with default arguments
    void calculate(int a, int b = 0) {
        cout << "Sum: " << a + b << endl;
    }

    // Overloaded function for doubles
    void calculate(double a, double b) {
        cout << "Sum (double): " << a + b << endl;
    }
};

int main() {
    Operations ops;
    ops.calculate(5);          // Default argument used (no need for extra call)
    ops.calculate(5, 10);      // Full parameters provided
    ops.calculate(2.5, 3.5);   // Calls the overloaded double version
    return 0;
}
