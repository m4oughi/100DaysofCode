#include <iostream>
using namespace std;

// Base class with non-virtual destructor
class Base {
public:
    Base() { cout << "Base constructor called." << endl; }
    ~Base() { cout << "Base destructor called." << endl; }
};

// Derived class managing a dynamic resource
class Derived : public Base {
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
