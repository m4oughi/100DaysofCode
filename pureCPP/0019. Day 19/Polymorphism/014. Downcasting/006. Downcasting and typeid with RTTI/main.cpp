#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void specificFunction() {
        cout << "Specific function in Derived class" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();

    // Using typeid to check type before downcasting
    if (typeid(*basePtr) == typeid(Derived)) {
        Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
        if (derivedPtr) {
            derivedPtr->specificFunction();
        }
    } else {
        cout << "Not a Derived object." << endl;
    }

    delete basePtr;
    return 0;
}
