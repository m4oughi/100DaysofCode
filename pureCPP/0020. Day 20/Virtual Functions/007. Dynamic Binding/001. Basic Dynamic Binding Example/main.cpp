#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overrides virtual function
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Base class pointer to a Derived object
    basePtr->show();  // Calls Derived's show() due to dynamic binding

    delete basePtr;
    return 0;
}
