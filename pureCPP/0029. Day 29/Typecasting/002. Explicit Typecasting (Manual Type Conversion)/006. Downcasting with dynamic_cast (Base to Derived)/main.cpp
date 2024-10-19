#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class function." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function." << endl;
    }
};

int main() {
    Base* b = new Derived;
    Derived* d = dynamic_cast<Derived*>(b);  // Safe downcasting using dynamic_cast
    if (d) {
        d->show();  // Only executes if cast is successful
    } else {
        cout << "Casting failed." << endl;
    }
    delete b;
    return 0;
}
