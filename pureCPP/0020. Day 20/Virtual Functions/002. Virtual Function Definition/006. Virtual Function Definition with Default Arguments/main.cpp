#include <iostream>
using namespace std;

class Base {
public:
    virtual void show(int x = 10) {
        cout << "Base class show() called with x = " << x << endl;
    }
};

class Derived : public Base {
public:
    void show(int x = 20) override {
        cout << "Derived class show() called with x = " << x << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->show(); // Calls Derived's show(), but with Base's default argument

    delete basePtr;
    return 0;
}
