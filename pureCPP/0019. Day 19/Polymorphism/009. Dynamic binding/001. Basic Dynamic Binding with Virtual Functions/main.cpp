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
    void show() override {  // Override base class function
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Pointer to Base type, object of Derived
    basePtr->show();  // Calls Derived class's show due to dynamic binding

    delete basePtr;
    return 0;
}
