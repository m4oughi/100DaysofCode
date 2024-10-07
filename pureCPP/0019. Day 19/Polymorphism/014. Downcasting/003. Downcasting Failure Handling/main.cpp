#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void specificFunction() {
        cout << "Specific function in Derived class" << endl;
    }
};

class AnotherDerived : public Base {
public:
    void show() override {
        cout << "AnotherDerived class show function" << endl;
    }
};

int main() {
    Base* basePtr = new AnotherDerived();  // Upcasting to AnotherDerived
    basePtr->show();  // Calls AnotherDerived's show function

    // Downcasting to Derived - this will fail
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->specificFunction();  // This won't execute
    } else {
        cout << "Downcasting failed! Not an instance of Derived." << endl;
    }

    delete basePtr;
    return 0;
}
