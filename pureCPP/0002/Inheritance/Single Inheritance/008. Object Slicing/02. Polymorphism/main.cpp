#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() override {  // Override the base class function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base baseObj = derivedObj;  // Object slicing

    baseObj.show();  // Calls Base::show() because baseObj is of type Base, not Derived

    return 0;
}
