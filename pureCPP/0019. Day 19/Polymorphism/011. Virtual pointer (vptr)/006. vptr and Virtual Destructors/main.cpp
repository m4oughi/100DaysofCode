#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {  // Virtual destructor ensures correct destruction
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    delete basePtr;  // Calls Derived's destructor via vptr, then Base's destructor

    return 0;
}
