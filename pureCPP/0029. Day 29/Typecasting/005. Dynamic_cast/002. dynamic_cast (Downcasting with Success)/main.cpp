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
    Base* basePtr = new Derived();  // Base pointer pointing to Derived object
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);  // Safe downcast

    if (derivedPtr) {
        derivedPtr->show();  // Successful downcast, calls Derived's show()
    } else {
        cout << "Downcast failed." << endl;
    }

    delete basePtr;
    return 0;
}
