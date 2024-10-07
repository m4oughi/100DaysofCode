#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual ~Base() {}
};

class Intermediate : public virtual Base {};

class Derived : public virtual Intermediate {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void specificFunction() {
        cout << "Specific function in Derived class" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Upcasting
    basePtr->show();  // Calls Derived's show function

    // Safe downcasting using dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->specificFunction();  // Calls Derived's specific function
    } else {
        cout << "Downcasting failed!" << endl;
    }

    delete basePtr;
    return 0;
}
