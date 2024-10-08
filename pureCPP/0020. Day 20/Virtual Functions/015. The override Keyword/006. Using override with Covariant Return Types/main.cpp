#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* getObject() {
        cout << "Base class getObject()" << endl;
        return this;
    }
};

class Derived : public Base {
public:
    Derived* getObject() override {  // Covariant return type
        cout << "Derived class getObject()" << endl;
        return this;
    }
};

int main() {
    Base* obj = new Derived();
    obj->getObject();  // Calls Derived's getObject() due to covariant return type
    delete obj;
    return 0;
}
