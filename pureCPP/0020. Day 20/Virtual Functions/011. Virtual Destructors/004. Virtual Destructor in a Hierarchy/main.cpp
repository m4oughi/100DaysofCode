#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Intermediate : public Base {
public:
    ~Intermediate() {
        cout << "Intermediate class destructor" << endl;
    }
};

class Derived : public Intermediate {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;  // Calls destructors in the correct order: Derived -> Intermediate -> Base
    return 0;
}
