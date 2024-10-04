#include <iostream>
using namespace std;

// Forward declaration
class Derived;

// Friend function declaration
void friendFunction(Derived& d);

// Base class
class Base {
protected:
    int baseValue;

public:
    Base() : baseValue(50) {}  // Constructor
};

// Derived class
class Derived : public Base {
private:
    int derivedValue;

public:
    Derived() : derivedValue(60) {}  // Constructor
    friend void friendFunction(Derived& d);  // Declaring friend function
};

// Definition of the friend function
void friendFunction(Derived& d) {
    cout << "Base Value: " << d.baseValue << endl;    // Accessing protected member of Base
    cout << "Derived Value: " << d.derivedValue << endl;  // Accessing private member of Derived
}

int main() {
    Derived d;
    friendFunction(d);  // Accessing derived object through friend function
    return 0;
}
