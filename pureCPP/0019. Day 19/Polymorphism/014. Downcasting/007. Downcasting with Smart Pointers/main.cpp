#include <iostream>
#include <memory>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void specificFunction() {
        cout << "Specific function in Derived class" << endl;
    }
};

int main() {
    shared_ptr<Base> basePtr = make_shared<Derived>();  // Upcasting with smart pointers
    basePtr->show();  // Calls Derived's show function

    // Safe downcasting using dynamic_pointer_cast
    shared_ptr<Derived> derivedPtr = dynamic_pointer_cast<Derived>(basePtr);
    if (derivedPtr) {
        derivedPtr->specificFunction();  // Calls Derived's specific function
    } else {
        cout << "Downcasting failed!" << endl;
    }

    return 0;
}
