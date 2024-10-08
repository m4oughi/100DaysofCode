#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }
};

int main() {
    Derived d;
    Base* basePtr = &d;  // Vptr points to Derived's Vtable
    basePtr->show();  // Calls Derived's show()

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->show();  // Vptr correctly points to Derived's Vtable
    }

    return 0;
}
