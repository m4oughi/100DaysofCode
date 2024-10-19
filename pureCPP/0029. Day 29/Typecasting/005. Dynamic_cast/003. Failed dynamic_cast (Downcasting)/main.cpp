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

class AnotherClass : public Base {
public:
    void show() override {
        cout << "Another class." << endl;
    }
};

int main() {
    Base* basePtr = new AnotherClass();  // Base pointer pointing to AnotherClass object
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);  // Downcast attempt (will fail)

    if (derivedPtr) {
        derivedPtr->show();  // This will not be called
    } else {
        cout << "Downcast failed (nullptr)." << endl;  // Expected output
    }

    delete basePtr;
    return 0;
}
