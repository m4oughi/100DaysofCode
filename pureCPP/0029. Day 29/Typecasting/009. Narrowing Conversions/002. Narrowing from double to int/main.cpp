#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    int intPi = pi;  // Narrowing conversion: fractional part lost

    cout << "Original double value: " << pi << endl;
    cout << "Narrowed int value: " << intPi << endl;  // 3

    return 0;
}
