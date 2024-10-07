#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overrides Base's show method
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Base class pointer pointing to Derived object
    basePtr->show();  // Calls Derived class's show method via vtable

    delete basePtr;
    return 0;
}
