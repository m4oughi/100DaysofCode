#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class function." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function." << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    Derived* derivedPtr = (Derived*)basePtr;  // C-style casting from Base* to Derived*
    derivedPtr->show();  // Unsafe without checks
    delete basePtr;
    return 0;
}
