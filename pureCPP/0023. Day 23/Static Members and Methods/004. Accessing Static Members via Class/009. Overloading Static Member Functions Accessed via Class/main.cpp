#include <iostream>
using namespace std;

class Calculator {
public:
    static int multiply(int a, int b) {  // Static member function 1
        return a * b;
    }

    static double multiply(double a, double b) {  // Static member function 2
        return a * b;
    }
};

int main() {
    // Access overloaded static functions via class
    cout << "Multiplying integers: " << Calculator::multiply(3, 4) << endl;  // Output: 12
    cout << "Multiplying doubles: " << Calculator::multiply(2.5, 4.5) << endl;  // Output: 11.25

    return 0;
}
