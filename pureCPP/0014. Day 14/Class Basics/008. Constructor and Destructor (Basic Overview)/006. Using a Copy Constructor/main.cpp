#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Parameterized constructor
    Number(int v) : value(v) {}

    // Copy constructor
    Number(const Number &num) {
        value = num.value;
        cout << "Copy constructor called!" << endl;
    }

    int getValue() {
        return value;
    }
};

int main() {
    Number num1(10);  // Constructor called
    Number num2 = num1;  // Copy constructor called

    cout << "Num1: " << num1.getValue() << endl;
    cout << "Num2: " << num2.getValue() << endl;
    return 0;
}
