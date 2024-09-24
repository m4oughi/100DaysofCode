#include <iostream>
using namespace std;

void calculate(int a) {
    cout << "Calculating with integer: " << a << endl;
}

void calculate(double a) {
    cout << "Calculating with double: " << a << endl;
}

int main() {
    short x = 10;
    calculate(x);  // Calls calculate(int) as short is promoted to int
    return 0;
}
