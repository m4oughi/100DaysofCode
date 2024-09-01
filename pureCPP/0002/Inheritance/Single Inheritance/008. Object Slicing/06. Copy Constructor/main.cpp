#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseValue;

    Base(int val = 0) : baseValue(val) {}

    // Copy constructor for Base
    Base(const Base& obj) {
        cout << "Base copy constructor called." << endl;
        baseValue = obj.baseValue;
    }

    virtual void show() {
        cout << "Base value: " << baseValue << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int derivedValue;

    Derived(int baseVal = 0, int derivedVal = 0) : Base(baseVal), derivedValue(derivedVal) {}

    // Copy constructor for Derived
    Derived(const Derived& obj) : Base(obj) {
        cout << "Derived copy constructor called." << endl;
        derivedValue = obj.derivedValue;
    }

    void show() override {
        cout << "Base value: " << baseValue << ", Derived value: " << derivedValue << endl;
    }
};

int main() {
    Derived derivedObj(10, 20);
    Base baseObj = derivedObj;  // Object slicing, calls Base copy constructor

    baseObj.show();  // Calls Base::show(), only baseValue is displayed

    return 0;
}
