#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class." << endl;
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class." << endl;
    }
};

void checkType(Base* basePtr) {
    if (dynamic_cast<Derived*>(basePtr)) {
        cout << "The object is of type Derived." << endl;
    } else {
        cout << "The object is of type Base." << endl;
    }
}

int main() {
    Base base;
    Derived derived;

    checkType(&base);      // Output: The object is of type Base
    checkType(&derived);   // Output: The object is of type Derived

    return 0;
}
