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
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show();  // Calls Derived's show() due to virtual function

    delete basePtr;
    return 0;
}
