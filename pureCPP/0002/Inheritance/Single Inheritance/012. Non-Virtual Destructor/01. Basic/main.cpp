#include <iostream>
using namespace std;

// Base class with non-virtual destructor
class Base {
public:
    Base() { cout << "Base constructor called." << endl; }
    ~Base() { cout << "Base destructor called." << endl; } // Non-virtual destructor
};

// Derived class
class Derived : public Base {
public:
    Derived() { cout << "Derived constructor called." << endl; }
    ~Derived() { cout << "Derived destructor called." << endl; }
};

int main() {
    Base* obj = new Derived(); // Create a Derived object but use a Base pointer
    delete obj;                // Incorrectly deletes through Base pointer

    return 0;
}
