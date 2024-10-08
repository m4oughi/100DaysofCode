#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }

    virtual void display() {
        cout << "Base display()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived show()" << endl;
    }

    void display() override {
        cout << "Derived display()" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->show();    // Calls Derived's show() using Vtable
    ptr->display(); // Calls Derived's display() using Vtable

    delete ptr;
    return 0;
}
