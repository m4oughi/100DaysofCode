#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        Base::show();  // Call the base class implementation
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls both Base's and Derived's show()

    delete basePtr;
    return 0;
}
