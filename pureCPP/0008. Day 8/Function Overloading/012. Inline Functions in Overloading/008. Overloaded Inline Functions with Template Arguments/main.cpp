#include <iostream>
using namespace std;

class Operations {
public:
    // Inline template function for general types
    template <typename T>
    inline T multiply(T a, T b) {
        return a * b;
    }

    // Inline overloaded function for a specific type (e.g., double)
    inline double multiply(double a, double b) {
        return a * b;
    }
};

int main() {
    Operations ops;
    cout << "Multiply (int): " << ops.multiply(3, 4) << endl;    // Template version
    cout << "Multiply (double): " << ops.multiply(3.5, 4.5) << endl; // Overloaded double version
    return 0;
}
