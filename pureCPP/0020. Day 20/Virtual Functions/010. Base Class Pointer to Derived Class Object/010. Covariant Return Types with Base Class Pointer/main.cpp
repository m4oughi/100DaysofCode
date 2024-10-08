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
    Base* clonedPtr = basePtr->clone();  // Calls Derived's clone(), returns Derived*

    cout << "Cloned object created" << endl;

    delete basePtr;
    delete clonedPtr;
    return 0;
}
