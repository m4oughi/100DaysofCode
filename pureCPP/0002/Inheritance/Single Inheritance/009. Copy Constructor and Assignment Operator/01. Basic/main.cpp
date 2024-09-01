#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseValue;

    // Default constructor
    Base(int val = 0) : baseValue(val) {
        cout << "Base constructor called." << endl;
    }

    // Copy constructor
    Base(const Base& other) : baseValue(other.baseValue) {
        cout << "Base copy constructor called." << endl;
    }

    // Assignment operator
    Base& operator=(const Base& other) {
        if (this != &other) { // Self-assignment check
            baseValue = other.baseValue;
            cout << "Base assignment operator called." << endl;
        }
        return *this;
    }
};

// Derived class
class Derived : public Base {
public:
    int derivedValue;

    // Default constructor
    Derived(int baseVal = 0, int derivedVal = 0) : Base(baseVal), derivedValue(derivedVal) {
        cout << "Derived constructor called." << endl;
    }

    // Copy constructor
    Derived(const Derived& other) : Base(other), derivedValue(other.derivedValue) {
        cout << "Derived copy constructor called." << endl;
    }

    // Assignment operator
    Derived& operator=(const Derived& other) {
        if (this != &other) { // Self-assignment check
            Base::operator=(other); // Copy base part
            derivedValue = other.derivedValue; // Copy derived part
            cout << "Derived assignment operator called." << endl;
        }
        return *this;
    }
};

int main() {
    Derived obj1(10, 20);   // Calls default constructors
    Derived obj2 = obj1;    // Calls copy constructor

    Derived obj3;
    obj3 = obj1;            // Calls assignment operator

    return 0;
}
