#include <iostream>
using namespace std;

void compute(int a, int b = 10) {
    cout << "Sum: " << a + b << endl;
}

void compute(double a, double b = 7.5) {
    cout << "Sum (double): " << a + b << endl;
}

int main() {
    compute(5);      // Ambiguous, could match either int or double
    return 0;
}
