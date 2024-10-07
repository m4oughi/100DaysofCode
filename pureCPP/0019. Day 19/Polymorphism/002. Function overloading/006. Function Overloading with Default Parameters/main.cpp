#include <iostream>
using namespace std;

int multiply(int a, int b = 2) {
    return a * b;
}

double multiply(double a, double b = 2.5) {
    return a * b;
}

int main() {
    cout << "Multiplication of integers: " << multiply(3) << endl;  // Uses default
    cout << "Multiplication of doubles: " << multiply(2.0) << endl; // Uses default
    cout << "Multiplication of two integers: " << multiply(3, 4) << endl;
    return 0;
}
