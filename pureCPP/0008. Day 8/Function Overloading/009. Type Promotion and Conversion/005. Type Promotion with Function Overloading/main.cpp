#include <iostream>
using namespace std;

void operate(int a) {
    cout << "Operating with integer: " << a << endl;
}

void operate(float a) {
    cout << "Operating with float: " << a << endl;
}

void operate(double a) {
    cout << "Operating with double: " << a << endl;
}

int main() {
    operate(5.5);   // Calls operate(double) as 5.5 is a double
    operate(3.0f);  // Calls operate(float) as 3.0f is a float
    return 0;
}
