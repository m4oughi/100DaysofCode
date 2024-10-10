#include <iostream>
using namespace std;

template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T a, T b) : num1(a), num2(b) {}

    // Friend function with a class template
    friend void displaySum(Calculator<T> calc) {
        cout << "Sum: " << calc.num1 + calc.num2 << endl;
    }
};

int main() {
    Calculator<int> intCalc(10, 20);
    Calculator<float> floatCalc(12.5, 7.5);

    displaySum(intCalc);   // Calls friend function for int type
    displaySum(floatCalc); // Calls friend function for float type
    return 0;
}
