#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T multiply(T a, T b) {
        return a * b;
    }
};

int main() {
    Calculator<int> intCalc;
    Calculator<double> doubleCalc;

    cout << "Int Addition: " << intCalc.add(3, 4) << endl;  // Integer addition
    cout << "Double Multiplication: " << doubleCalc.multiply(2.5, 4.2) << endl;  // Double multiplication

    return 0;
}
