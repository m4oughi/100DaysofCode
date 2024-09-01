#include <iostream>
using namespace std;

// Base class with multiple constructors
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
    Base(int val1) : Base(val1, 20) {
        cout << "Base constructor with one parameter called." << endl;
    }

    // Delegating default constructor
    Base() : Base(0) {
        cout << "Base default constructor called." << endl;
    }
};

// Derived class with multiple constructors
class Derived : public Base {
private:
    int extraValue;
public:
    // Constructor that uses Base constructor with one parameter
    Derived(int val1, int extra) : Base(val1), extraValue(extra) {
        cout << "Derived constructor called with value1: " << val1 << ", extraValue: " << extraValue << endl;
    }

    // Delegating constructor
    Derived(int extra) : Derived(10, extra) {
        cout << "Derived constructor with one parameter called." << endl;
    }

    // Default constructor
    Derived() : Derived(5) {
        cout << "Derived default constructor called." << endl;
    }
};

int main() {
    Derived d1(30, 40); // Calls Derived constructor with two parameters
    Derived d2(50);    // Calls Derived constructor with one parameter (delegates to two-parameter constructor)
    Derived d3;        // Calls Derived default constructor (delegates to one-parameter constructor)

    return 0;
}
