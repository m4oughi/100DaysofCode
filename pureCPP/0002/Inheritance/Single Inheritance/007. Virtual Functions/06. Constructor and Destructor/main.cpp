#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base constructor called." << endl;
        show();  // Virtual function call inside constructor
    }

    virtual ~Base() {
        cout << "Base destructor called." << endl;
        show();  // Virtual function call inside destructor
    }

    virtual void show() {
        cout << "Base show." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called." << endl;
    }

    ~Derived() {
        cout << "Derived destructor called." << endl;
    }

    void show() override {
        cout << "Derived show." << endl;
    }
};

int main() {
    Base* basePtr = new Derived();  // Base class pointer to Derived object
    delete basePtr;  // Destructor called

    return 0;
}
