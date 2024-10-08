#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class definition of show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class definition of show()" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* basePtr = &baseObj;
    basePtr->show(); // Calls Base's show()

    basePtr = &derivedObj;
    basePtr->show(); // Calls Derived's show()

    return 0;
}
