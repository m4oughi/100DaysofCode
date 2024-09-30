#include <iostream>
using namespace std;

class Calculator {
public:
    double (*operation)(double, double); // Function pointer as a member

    void setOperation(double (*op)(double, double)) {
        operation = op;
    }

    double executeOperation(double a, double b) {
        return operation(a, b);
    }
};

double add(double a, double b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    Calculator calc;

    calc.setOperation(add);
    cout << "Addition: " << calc.executeOperation(5.0, 3.0) << endl;

    calc.setOperation(multiply);
    cout << "Multiplication: " << calc.executeOperation(5.0, 3.0) << endl;

    return 0;
}
