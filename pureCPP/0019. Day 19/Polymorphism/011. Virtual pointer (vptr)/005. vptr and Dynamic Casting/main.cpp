#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void derivedFunction() {
        cout << "Derived class specific function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Derived's show via vptr

    // Dynamic casting to Derived class
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->derivedFunction();  // Calls function specific to Derived class
    } else {
        cout << "Dynamic cast failed" << endl;
    }

    delete basePtr;
    return 0;
}
