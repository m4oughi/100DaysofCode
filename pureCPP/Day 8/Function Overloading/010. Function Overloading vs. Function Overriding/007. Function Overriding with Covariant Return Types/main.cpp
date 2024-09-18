#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* getObject() {
        cout << "Returning Base object" << endl;
        return this;
    }
};

class Derived : public Base {
public:
    Derived* getObject() override {
        cout << "Returning Derived object" << endl;
        return this;
    }
};

int main() {
    Derived d;
    Base* basePtr = d.getObject();  // Calls Derived::getObject
    return 0;
}
