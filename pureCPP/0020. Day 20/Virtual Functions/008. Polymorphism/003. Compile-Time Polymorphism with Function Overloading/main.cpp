#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of integers: " << calc.add(3, 5) << endl;      // Calls add(int, int)
    cout << "Sum of doubles: " << calc.add(3.2, 5.8) << endl;  // Calls add(double, double)

    return 0;
}
