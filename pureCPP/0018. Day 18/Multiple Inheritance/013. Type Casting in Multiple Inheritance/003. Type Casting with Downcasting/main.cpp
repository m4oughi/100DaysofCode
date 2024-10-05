#include <iostream>
using namespace std;

class Base1 {
public:
    virtual void show() {
        cout << "Base1 method" << endl;
    }
};

class Base2 {
public:
    virtual void show() {
        cout << "Base2 method" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        cout << "Derived method" << endl;
    }
};

int main() {
    Base1* base1Ptr = new Derived();  // Base1 pointer to Derived object

    Derived* derivedPtr = dynamic_cast<Derived*>(base1Ptr);  // Downcast to Derived
    if (derivedPtr) {
        derivedPtr->show();  // Calls Derived's method
    } else {
        cout << "Failed to cast to Derived" << endl;
    }

    delete base1Ptr;
    return 0;
}
