#include <iostream>
#include <cstring>
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

// Derived class with multiple dynamic resources
class Derived : public Base {
public:
    int* derivedValue;
    char* name;

    Derived(int baseVal = 0, int derivedVal = 0, const char* nameStr = "Default")
        : Base(baseVal), derivedValue(new int(derivedVal)) {
        cout << "Derived constructor called." << endl;
        name = new char[strlen(nameStr) + 1];
        strcpy(name, nameStr);
    }

    // Copy constructor
    Derived(const Derived& other) : Base(other) {
        derivedValue = new int(*other.derivedValue); // Deep copy for int
        name = new char[strlen(other.name) + 1]; // Deep copy for string
        strcpy(name, other.name);
        cout << "Derived copy constructor called." << endl;
    }

    // Assignment operator
    Derived& operator=(const Derived& other) {
        if (this != &other) {
            Base::operator=(other); // Copy base part
            delete derivedValue; // Free existing memory
            derivedValue = new int(*other.derivedValue); // Deep copy for int
            delete[] name; // Free existing memory
            name = new char[strlen(other.name) + 1]; // Deep copy for string
            strcpy(name, other.name);
            cout << "Derived assignment operator called." << endl;
        }
        return *this;
    }

    ~Derived() {
        delete derivedValue;
        delete[] name;
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    Derived obj1(10, 20, "First");   // Constructor
    Derived obj2 = obj1;             // Copy constructor

    Derived obj3;
    obj3 = obj1;                     // Assignment operator

    return 0;
}
