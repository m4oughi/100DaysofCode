#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual void print() {
        cout << "Base class print function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void print() override {
        cout << "Derived class print function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();   // Resolved via vtable, calls Derived's show
    basePtr->print();  // Resolved via vtable, calls Derived's print

    delete basePtr;
    return 0;
}
