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
    Base* ptr = new Derived;
    ptr->show();  // Virtual function call

    delete ptr;
    return 0;
}
