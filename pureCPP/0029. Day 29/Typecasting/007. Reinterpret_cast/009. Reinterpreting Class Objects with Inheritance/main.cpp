#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class." << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;

    // Reinterpret the base pointer as a Derived* (although it was already derived)
    Derived* newDerivedPtr = reinterpret_cast<Derived*>(basePtr);

    newDerivedPtr->show();  // This works, but using reinterpret_cast is unsafe in such cases
    return 0;
}
