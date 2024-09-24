#include <iostream>
using namespace std;

void combine(int a, double b) {
    cout << "Combining integer and double: " << a << ", " << b << endl;
}

void combine(double a, int b) {
    cout << "Combining double and integer: " << a << ", " << b << endl;
}

int main() {
    combine(10, 5.5);   // Calls combine(int, double)
    combine(4.5, 5);    // Calls combine(double, int)
    return 0;
}
