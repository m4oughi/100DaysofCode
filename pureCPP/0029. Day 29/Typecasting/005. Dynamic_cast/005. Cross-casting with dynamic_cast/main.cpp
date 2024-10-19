#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class." << endl;
    }
};

class DerivedA : public Base {
public:
    void show() override {
        cout << "DerivedA class." << endl;
    }
};

class DerivedB : public Base {
public:
    void show() override {
        cout << "DerivedB class." << endl;
    }
};

int main() {
    Base* basePtr = new DerivedA();  // Base pointer pointing to DerivedA object
    DerivedB* derivedBPtr = dynamic_cast<DerivedB*>(basePtr);  // Attempt cross-cast to DerivedB*

    if (derivedBPtr) {
        derivedBPtr->show();
    } else {
        cout << "Cross-casting failed (nullptr)." << endl;  // Expected output
    }

    delete basePtr;
    return 0;
}
