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
    void specificFunction() {
        cout << "Specific function in Derived class" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Upcasting (implicit)
    basePtr->show();  // Calls Derived's show function (polymorphism)

    // Downcasting: Base pointer to Derived pointer
    Derived* derivedPtr = static_cast<Derived*>(basePtr);
    derivedPtr->specificFunction();  // Calls Derived's specific function

    delete basePtr;
    return 0;
}
