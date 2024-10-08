#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Dynamically allocated object
    basePtr->show();  // Vptr points to Derived's Vtable

    delete basePtr;  // Properly deallocates and calls Derived's destructor (if virtual)

    return 0;
}
