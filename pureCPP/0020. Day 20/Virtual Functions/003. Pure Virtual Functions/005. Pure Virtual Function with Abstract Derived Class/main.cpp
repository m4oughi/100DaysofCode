#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0; // Pure virtual function
    virtual void greet() = 0; // Another pure virtual function
};

class Intermediate : public Base {
public:
    void show() override {
        cout << "Intermediate class implementation of show()" << endl;
    }
    // greet() is not implemented, so Intermediate is still abstract
};

class Derived : public Intermediate {
public:
    void greet() override {
        cout << "Derived class implementation of greet()" << endl;
    }
};

int main() {
    Derived d;
    d.show();   // Calls Intermediate's show()
    d.greet();  // Calls Derived's greet()

    return 0;
}
