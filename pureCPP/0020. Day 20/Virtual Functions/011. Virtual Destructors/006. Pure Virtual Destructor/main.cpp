#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() = 0;  // Pure virtual destructor
};

Base::~Base() {
    cout << "Pure virtual Base class destructor" << endl;
}

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    delete obj;  // Calls Derived's destructor and then Base's destructor
    return 0;
}
