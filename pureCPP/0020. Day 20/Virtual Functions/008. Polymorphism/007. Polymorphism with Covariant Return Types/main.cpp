#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* clone() {
        return new Base();
    }
};

class Derived : public Base {
public:
    Derived* clone() override {  // Covariant return type
        return new Derived();
    }
};

int main() {
    Base* basePtr = new Derived();
    Base* clonePtr = basePtr->clone();  // Calls Derived's clone(), returns Derived*

    delete basePtr;
    delete clonePtr;
    return 0;
}
