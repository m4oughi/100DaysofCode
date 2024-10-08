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
    Base* basePtr = new Derived();  // Vptr in the object points to Derived's Vtable
    basePtr->show();  // Vptr is used to access Derived's show()

    delete basePtr;
    return 0;
}
