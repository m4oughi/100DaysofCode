#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* basePtr = new Base();
    Derived* derivedPtr = static_cast<Derived*>(basePtr);  // Unsafe narrowing conversion

    derivedPtr->show();  // Undefined behavior
    delete basePtr;
    return 0;
}
