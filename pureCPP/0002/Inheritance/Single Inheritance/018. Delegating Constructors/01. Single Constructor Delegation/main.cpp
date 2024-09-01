#include <iostream>
using namespace std;

// Base class with delegating constructors
class Base {
private:
    int value;
public:
    // Main constructor
    Base(int val) : value(val) {
        cout << "Base constructor called with value: " << value << endl;
    }

    // Delegating constructor
    Base() : Base(0) {
        cout << "Base default constructor called." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Constructor that uses the base class default constructor
    Derived() : Base() {
        cout << "Derived constructor called." << endl;
    }
};

int main() {
    Derived d; // Calls Derived constructor, which delegates to Base default constructor
    return 0;
}
