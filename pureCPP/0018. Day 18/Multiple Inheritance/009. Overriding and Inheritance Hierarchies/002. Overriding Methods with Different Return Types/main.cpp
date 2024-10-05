#include <iostream>
using namespace std;

class Base1 {
public:
    virtual int getValue() {
        return 10;
    }
};

class Base2 {
public:
    virtual double getValue() {
        return 20.5;
    }
};

class Derived : public Base1, public Base2 {
public:
    int getValue() override {
        return 30;  // Overriding Base1's getValue()
    }

    double getValue(double) {
        return 40.5;  // Overriding Base2's getValue()
    }
};

int main() {
    Derived d;
    cout << d.getValue() << endl;         // Calls Derived's getValue() returning int
    cout << d.getValue(0.0) << endl;      // Calls Derived's getValue() returning double
    return 0;
}
