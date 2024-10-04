#include <iostream>
using namespace std;

// Forward declaration
class Derived;

// Friend class
class FriendClass {
public:
    void showValues(Derived& d);  // Declaration of a member function
};

// Base class
class Base {
protected:
    int baseValue;

public:
    Base() : baseValue(15) {}  // Constructor
};

// Derived class
class Derived : public Base {
private:
    int derivedValue;

public:
    Derived() : derivedValue(25) {}  // Constructor
    friend class FriendClass;  // Declaring FriendClass as a friend
};

// Definition of FriendClass member function
void FriendClass::showValues(Derived& d) {
    cout << "Base Value (protected): " << d.baseValue << endl;    // Accessing protected member of Base
    cout << "Derived Value: " << d.derivedValue << endl;  // Accessing private member of Derived
}

int main() {
    Derived d;
    FriendClass f;
    f.showValues(d);  // Accessing derived object through friend class
    return 0;
}
