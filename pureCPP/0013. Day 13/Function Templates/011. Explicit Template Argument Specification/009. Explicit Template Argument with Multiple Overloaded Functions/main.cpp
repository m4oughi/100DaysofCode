#include <iostream>
using namespace std;

template <typename T>
void multiply(T a, T b) {
    cout << "Product: " << a * b << endl;
}

void multiply(double a, double b) {
    cout << "Double product: " << a * b << endl;
}

int main() {
    multiply(3, 5);          // Calls template function, deduced as int
    multiply(3.0, 5.0);      // Calls non-template function
    multiply<int>(2, 4);     // Explicitly specifies T as int, calls template function
    return 0;
}
