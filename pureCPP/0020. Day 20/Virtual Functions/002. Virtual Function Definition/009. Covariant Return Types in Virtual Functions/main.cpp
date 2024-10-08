#include <iostream>
using namespace std;

class Base {
public:
    virtual Base* getInstance() {
        cout << "Base class getInstance()" << endl;
        return this;
    }
};

class Derived : public Base {
public:
    Derived* getInstance() override { // Covariant return type
        cout << "Derived class getInstance()" << endl;
        return this;
    }
};

int main() {
    Base* basePtr = new Derived();
    basePtr->getInstance(); // Calls Derived's getInstance()

    delete basePtr;
    return 0;
}
