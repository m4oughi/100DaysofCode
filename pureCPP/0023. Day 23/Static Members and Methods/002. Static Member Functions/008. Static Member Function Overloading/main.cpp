#include <iostream>
using namespace std;

class MathOperations {
public:
    static int multiply(int a, int b) {  // Overloaded function 1
        return a * b;
    }

    static double multiply(double a, double b) {  // Overloaded function 2
        return a * b;
    }
};

int main() {
    cout << "Multiplying integers: " << MathOperations::multiply(3, 4) << endl;  // Output: 12
    cout << "Multiplying doubles: " << MathOperations::multiply(2.5, 4.2) << endl;  // Output: 10.5

    return 0;
}
