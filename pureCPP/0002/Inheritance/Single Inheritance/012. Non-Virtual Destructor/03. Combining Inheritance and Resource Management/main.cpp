#include <iostream>
using namespace std;

// Base class with non-virtual destructor
class Base {
public:
    Base() { cout << "Base constructor called." << endl; }
    ~Base() { cout << "Base destructor called." << endl; }
};

// Intermediate class inheriting from Base
class Intermediate : public Base {
public:
    Intermediate() { cout << "Intermediate constructor called." << endl; }
    ~Intermediate() { cout << "Intermediate destructor called." << endl; }
};

// Derived class managing a dynamic resource
class Derived : public Intermediate {
private:
    int* data;
public:
    Derived(int value) : data(new int(value)) {
        cout << "Derived constructor called." << endl;
    }

    ~Derived() {
        delete data;
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    Base* obj = new Derived(42); // Create a Derived object but use a Base pointer
    delete obj;                  // Incorrectly deletes through Base pointer

    return 0;
}
