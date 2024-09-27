#include <iostream>
using namespace std;

template <typename T1, typename T2 = double>
class Calculator {
public:
    T2 multiply(T1 a, T2 b) {
        return a * b;
    }
};

int main() {
    Calculator<int> calc;     // T1 is int, T2 defaults to double
    cout << "Result: " << calc.multiply(5, 2.5) << endl;
    return 0;
}
