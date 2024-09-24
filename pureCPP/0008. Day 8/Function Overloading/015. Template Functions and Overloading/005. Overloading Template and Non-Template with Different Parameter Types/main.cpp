#include <iostream>
using namespace std;

template<typename T>
void calculate(T a) {
    cout << "Template function: " << a << endl;
}

void calculate(double a) {
    cout << "Non-template for double: " << a << endl;
}

int main() {
    calculate(10);        // Calls template function
    calculate(20.5);      // Calls non-template function for double

    return 0;
}
