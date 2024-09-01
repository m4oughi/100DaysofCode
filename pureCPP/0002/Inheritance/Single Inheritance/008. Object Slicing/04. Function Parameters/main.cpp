#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

// Function taking base class object by value
void display(Base baseObj) {
    baseObj.show();  // Calls Base::show() due to object slicing
}

int main() {
    Derived derivedObj;
    display(derivedObj);  // Object slicing occurs here

    return 0;
}
