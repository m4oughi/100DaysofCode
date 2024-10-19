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
    Derived* d = static_cast<Derived*>(b);  // Explicit casting from Base* to Derived*
    d->show();
    delete b;
    return 0;
}
