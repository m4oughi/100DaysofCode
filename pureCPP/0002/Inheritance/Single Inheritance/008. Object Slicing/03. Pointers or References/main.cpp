#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;  // Use a base class pointer to the derived object

    basePtr->show();  // Calls Derived::show() due to polymorphism

    return 0;
}
