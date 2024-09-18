#include <iostream>
using namespace std;

class Operations {
public:
    // Inline multiplication for integers
    inline int multiply(int a, int b) {
        return a * b;
    }

    // Inline multiplication for doubles
    inline double multiply(double a, double b) {
        return a * b;
    }

    // Inline multiplication for mixed types
    inline double multiply(int a, double b) {
        return a * b;
    }
};

int main() {
    Operations ops;
    cout << "Multiply (int): " << ops.multiply(2, 3) << endl;
    cout << "Multiply (double): " << ops.multiply(2.5, 3.5) << endl;
    cout << "Multiply (mixed): " << ops.multiply(2, 3.5) << endl;
    return 0;
}
