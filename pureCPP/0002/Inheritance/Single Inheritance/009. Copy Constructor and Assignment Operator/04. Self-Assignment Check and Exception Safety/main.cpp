#include <iostream>
#include <memory>
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

// Derived class using smart pointers
class Derived : public Base {
public:
    std::unique_ptr<int> derivedValue;
    std::unique_ptr<char[]> name;

    Derived(int baseVal = 0, int derivedVal = 0, const char* nameStr = "Default")
        : Base(baseVal), derivedValue(std::make_unique<int>(derivedVal)) {
        cout << "Derived constructor called." << endl;
        name = std::make_unique<char[]>(strlen(nameStr) + 1);
        strcpy(name.get(), nameStr);
    }

    // Copy constructor
    Derived(const Derived& other) : Base(other) {
        derivedValue = std::make_unique<int>(*other.derivedValue); // Deep copy using smart pointer
        name = std::make_unique<char[]>(strlen(other.name.get()) + 1); // Deep copy using smart pointer
        strcpy(name.get(), other.name.get());
        cout << "Derived copy constructor called." << endl;
    }

    // Assignment operator using copy-and-swap idiom
    Derived& operator=(Derived other) {
        Base::operator=(other); // Copy base part
        swap(derivedValue, other.derivedValue);
        swap(name, other.name);
        cout << "Derived assignment operator called." << endl;
        return *this;
    }
};

int main() {
    Derived obj1(10, 20, "First");   // Constructor
    Derived obj2 = obj1;             // Copy constructor

    Derived obj3;
    obj3 = obj1;                     // Assignment operator

    return 0;
}
