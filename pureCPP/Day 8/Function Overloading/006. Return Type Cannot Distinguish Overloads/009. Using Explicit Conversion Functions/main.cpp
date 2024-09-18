#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) : value(v) {}

    operator int() const {
        return value;
    }

    operator double() const {
        return value + 0.5;
    }
};

int main() {
    Number num(10);
    int intResult = num;        // Calls operator int()
    double doubleResult = num;  // Calls operator double()
    cout << "Integer Result: " << intResult << endl;
    cout << "Double Result: " << doubleResult << endl;
    return 0;
}
