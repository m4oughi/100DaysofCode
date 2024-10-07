#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* clone() const = 0;  // Pure virtual function
};

class Derived : public Base {
public:
    Derived* clone() const override {  // Covariant return type
        return new Derived(*this);
    }
};

int main() {
    Derived d1;
    Base* clone = d1.clone();  // Calls Derived's clone method

    delete clone;
    return 0;
}
