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
    Derived* getObject() final {  // Covariant return type, final keyword used
        cout << "Derived class getObject()" << endl;
        return this;
    }
};

int main() {
    Derived obj;
    obj.getObject();  // Calls the final implementation of getObject()
    return 0;
}
