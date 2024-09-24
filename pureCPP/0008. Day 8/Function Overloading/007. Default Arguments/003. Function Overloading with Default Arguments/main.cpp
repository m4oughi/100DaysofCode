#include <iostream>
using namespace std;

void calculate(int a, int b = 5) {
    cout << "Sum: " << a + b << endl;
}

void calculate(double a, double b = 7.5) {
    cout << "Sum (double): " << a + b << endl;
}

int main() {
    calculate(10);              // Calls calculate(int, int) with default value for b
    calculate(10, 20);          // Calls calculate(int, int) with custom values
    calculate(5.5);             // Calls calculate(double, double) with default value for b
    calculate(5.5, 2.5);        // Calls calculate(double, double) with custom values
    return 0;
}
