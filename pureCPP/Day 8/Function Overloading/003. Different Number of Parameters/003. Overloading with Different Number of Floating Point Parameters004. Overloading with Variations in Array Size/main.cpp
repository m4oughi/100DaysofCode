#include <iostream>
using namespace std;

void sum(double a) {
    cout << "Sum of one number: " << a << endl;
}

void sum(double a, double b) {
    cout << "Sum of two numbers: " << a + b << endl;
}

void sum(double a, double b, double c) {
    cout << "Sum of three numbers: " << a + b + c << endl;
}

int main() {
    sum(2.5);           // Calls sum(double)
    sum(2.5, 3.5);      // Calls sum(double, double)
    sum(2.5, 3.5, 4.5); // Calls sum(double, double, double)
    return 0;
}
