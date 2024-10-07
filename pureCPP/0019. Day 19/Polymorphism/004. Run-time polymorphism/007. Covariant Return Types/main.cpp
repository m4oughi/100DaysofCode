#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* get() {
        cout << "Returning Base object" << endl;
        return this;
    }
};

class Derived : public Base {
public:
    Derived* get() override {
        cout << "Returning Derived object" << endl;
        return this;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->get();  // Calls Derived's get function and returns Derived*

    delete basePtr;
    return 0;
}
