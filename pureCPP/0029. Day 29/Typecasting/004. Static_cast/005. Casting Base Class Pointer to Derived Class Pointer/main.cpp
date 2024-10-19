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
    void show() {
        cout << "Derived class." << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Base class pointer to Derived object
    Derived* derivedPtr = static_cast<Derived*>(basePtr);  // Safe cast from Base* to Derived*
    derivedPtr->show();
    delete basePtr;
    return 0;
}
