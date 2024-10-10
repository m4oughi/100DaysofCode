#include <iostream>
using namespace std;

// Abstract Base Class
class Base {
public:
    virtual void doSomething() = 0;
    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Intermediate : public virtual Base {
public:
    virtual ~Intermediate() {
        cout << "Intermediate Destructor" << endl;
    }
};

class Derived : public Intermediate {
public:
    void doSomething() override {
        cout << "Derived Doing Something" << endl;
    }
    ~Derived() override {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Base* base = new Derived();  // Virtual inheritance scenario
    delete base;  // Properly calls Derived, Intermediate, and Base destructors

    return 0;
}
