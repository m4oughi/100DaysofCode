#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* get() {
        cout << "Returning Base pointer" << endl;
        return this;
    }
};

class Derived : public Base {
public:
    Derived* get() override {  // Covariant return type (returns a Derived pointer)
        cout << "Returning Derived pointer" << endl;
        return this;
    }
};

int main() {
    Base* base = new Derived();
    base->get();  // Calls Derived's get function and returns a Derived pointer

    delete base;
    return 0;
}
