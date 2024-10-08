#include <iostream>
using namespace std;

class Base {
public:
    void greet() {
        cout << "Hello from Base class!" << endl;
    }

    virtual void show() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class implementation of show()" << endl;
    }
};

int main() {
    Derived d;
    d.greet();  // Calls the concrete method from Base
    d.show();   // Calls the overridden method from Derived

    return 0;
}
