#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Intermediate : public virtual Base {};

class Derived : public virtual Intermediate {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;  // Upcasting in a virtual inheritance hierarchy
    basePtr->show();  // Calls Derived's show function

    return 0;
}
