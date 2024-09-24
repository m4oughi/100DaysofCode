#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) : value(v) {}

    // Invalid operator overloading
    int operator+() const {
        return value;
    }

    double operator+() const {
        return value + 0.5;
    }
};

int main() {
    Number num(10);
    int intResult = +num;      // Ambiguous call
    cout << "Result: " << intResult << endl;
    return 0;
}
