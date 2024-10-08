#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* clone() const = 0;  // Pure virtual function with covariant return type
};

class Derived : public Base {
public:
    Derived* clone() const override {  // Covariant return type
        return new Derived(*this);
    }
};

int main() {
    Base* basePtr = new Derived();
    Base* clonePtr = basePtr->clone();  // Calls Derived's clone()

    delete basePtr;
    delete clonePtr;
    return 0;
}
