#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() = 0;  // Pure virtual destructor
};

Base::~Base() {
    cout << "Base Destructor" << endl;
}

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Base* base = new Derived();
    delete base;  // Calls both Base and Derived destructors

    return 0;
}
