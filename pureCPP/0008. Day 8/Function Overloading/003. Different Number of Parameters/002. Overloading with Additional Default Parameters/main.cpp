#include <iostream>
using namespace std;

void calculate(int a) {
    cout << "Square: " << a * a << endl;
}

void calculate(int a, int b = 2) {
    cout << "Power: " << a << "^" << b << " = " << pow(a, b) << endl;
}

int main() {
    calculate(3);        // Calls calculate(int) for square
    calculate(3, 4);     // Calls calculate(int, int) for power
    return 0;
}
