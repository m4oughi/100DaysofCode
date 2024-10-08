#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() const {
        cout << "Base class const show() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() const override {
        cout << "Derived class const show() called" << endl;
    }
};

int main() {
    const Base* basePtr = new Derived();
    basePtr->show(); // Calls Derived's show()

    delete basePtr;
    return 0;
}
