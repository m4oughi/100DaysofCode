#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int value; // Member variable in the base class

    Base(int v) : value(v) {}
};

// Derived class
class Derived : public Base {
public:
    int value; // This hides the base class's 'value'

    Derived(int baseValue, int derivedValue) : Base(baseValue), value(derivedValue) {}

    void printValues() {
        cout << "Base class value: " << Base::value << endl; // Accessing base class member
        cout << "Derived class value: " << value << endl;     // Accessing derived class member
    }
};

int main() {
    Derived obj(10, 20);
    obj.printValues();

    return 0;
}
