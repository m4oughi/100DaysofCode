#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseValue;

    Base(int val = 0) : baseValue(val) {
        cout << "Base constructor called." << endl;
    }

    Base(const Base& other) : baseValue(other.baseValue) {
        cout << "Base copy constructor called." << endl;
    }

    Base& operator=(const Base& other) {
        if (this != &other) {
            baseValue = other.baseValue;
            cout << "Base assignment operator called." << endl;
        }
        return *this;
    }
};

// Derived class with dynamic memory
class Derived : public Base {
public:
    int* derivedValue;

    Derived(int baseVal = 0, int derivedVal = 0) : Base(baseVal), derivedValue(new int(derivedVal)) {
        cout << "Derived constructor called." << endl;
    }

    // Copy constructor
    Derived(const Derived& other) : Base(other) {
        derivedValue = new int(*other.derivedValue); // Deep copy
        cout << "Derived copy constructor called." << endl;
    }

    // Assignment operator
    Derived& operator=(const Derived& other) {
        if (this != &other) {
            Base::operator=(other); // Copy base part
            delete derivedValue; // Free existing memory
            derivedValue = new int(*other.derivedValue); // Deep copy
            cout << "Derived assignment operator called." << endl;
        }
        return *this;
    }

    ~Derived() {
        delete derivedValue;
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    Derived obj1(10, 20);  // Constructor
    Derived obj2 = obj1;   // Copy constructor

    Derived obj3;
    obj3 = obj1;           // Assignment operator

    return 0;
}
