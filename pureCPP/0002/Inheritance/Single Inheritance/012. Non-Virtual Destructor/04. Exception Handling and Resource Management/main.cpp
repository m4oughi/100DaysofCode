#include <iostream>
#include <stdexcept>
using namespace std;

// Base class with non-virtual destructor
class Base {
public:
    Base() { cout << "Base constructor called." << endl; }
    ~Base() { cout << "Base destructor called." << endl; }
};

// Derived class managing a dynamic resource with exception handling
class Derived : public Base {
private:
    int* data;
public:
    Derived(int value) : data(new int(value)) {
        cout << "Derived constructor called." << endl;
        if (value < 0) throw runtime_error("Negative value not allowed."); // Example exception
    }

    ~Derived() {
        delete data;
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    try {
        Derived obj(-1); // This will throw an exception
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
