#include <iostream>
using namespace std;

// Base class with delegating constructors
class Base {
private:
    int value1;
    int value2;
public:
    // Main constructor
    Base(int val1, int val2) : value1(val1), value2(val2) {
        cout << "Base constructor called with value1: " << value1 << ", value2: " << value2 << endl;
    }

    // Delegating constructor with one parameter
    Base(int val1) : Base(val1, 10) {
        cout << "Base constructor with one parameter called." << endl;
    }

    // Delegating default constructor
    Base() : Base(0) {
        cout << "Base default constructor called." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Constructor that initializes base class with one parameter
    Derived(int val) : Base(val) {
        cout << "Derived constructor called with value: " << val << endl;
    }
};

int main() {
    Derived d(20); // Calls Derived constructor, which delegates to Base constructor with one parameter
    return 0;
}
