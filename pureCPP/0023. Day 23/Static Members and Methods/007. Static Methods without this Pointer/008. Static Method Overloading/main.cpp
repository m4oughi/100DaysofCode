#include <iostream>
using namespace std;

class Calculator {
public:
    static int add(int a, int b) {  // Static method 1
        return a + b;
    }

    static double add(double a, double b) {  // Static method 2 (Overloaded)
        return a + b;
    }
};

int main() {
    // Call both versions of overloaded static methods
    cout << "Sum of integers: " << Calculator::add(3, 5) << endl;  // Output: 8
    cout << "Sum of doubles: " << Calculator::add(2.5, 4.5) << endl;  // Output: 7.0
    return 0;
}
