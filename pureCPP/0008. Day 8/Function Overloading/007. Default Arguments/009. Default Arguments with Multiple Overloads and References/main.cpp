#include <iostream>
using namespace std;

void modify(int& a, int increment = 1) {
    a += increment;
    cout << "Modified integer: " << a << endl;
}

void modify(double& a, double factor = 1.5) {
    a *= factor;
    cout << "Modified double: " << a << endl;
}

int main() {
    int x = 5;
    double y = 10.0;

    modify(x);         // Uses default increment
    modify(y);         // Uses default factor
    modify(x, 3);      // Custom increment
    modify(y, 2.0);    // Custom factor
    return 0;
}
