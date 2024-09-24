#include <iostream>
using namespace std;

class Calculator {
public:
    void multiply(int a, double b) {
        cout << "Multiplication result: " << a * b << endl;
    }

    void multiply(double b, int a) {
        cout << "Multiplication result: " << a * b << endl;
    }
};

int main() {
    Calculator calc;
    calc.multiply(3, 4.5);     // Calls multiply(int, double)
    calc.multiply(4.5, 3);     // Calls multiply(double, int)
    return 0;
}
