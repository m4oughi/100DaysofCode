#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseValue;

    Base(int val = 0) : baseValue(val) {}

    void show() {
        cout << "Base value: " << baseValue << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    int derivedValue;

    Derived(int baseVal = 0, int derivedVal = 0) : Base(baseVal), derivedValue(derivedVal) {}

    void show() {
        cout << "Base value: " << baseValue << ", Derived value: " << derivedValue << endl;
    }
};

int main() {
    Derived derivedObj(10, 20);
    Base baseObj = derivedObj;  // Object slicing occurs here

    baseObj.show();  // Calls Base::show(), only baseValue is displayed

    return 0;
}
