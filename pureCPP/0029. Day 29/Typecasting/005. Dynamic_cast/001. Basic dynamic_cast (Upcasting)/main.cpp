#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class." << endl;
    }
};

int main() {
    Derived d;
    Base* basePtr = dynamic_cast<Base*>(&d);  // Safe upcasting from Derived* to Base*
    basePtr->show();
    return 0;
}
