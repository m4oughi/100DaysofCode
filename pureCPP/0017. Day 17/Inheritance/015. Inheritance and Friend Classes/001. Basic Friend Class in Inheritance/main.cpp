#include <iostream>
using namespace std;

// Forward declaration
class Derived; 

// Friend class
class FriendClass {
public:
    void showDerived(Derived& d);  // Declaration of a member function
};

// Base class
class Base {
private:
    int baseValue;

public:
    Base() : baseValue(10) {}  // Constructor
    friend class FriendClass;   // Declaring FriendClass as a friend
};

// Derived class
class Derived : public Base {
private:
    int derivedValue;

public:
    Derived() : derivedValue(20) {}  // Constructor
    friend class FriendClass;  // Declaring FriendClass as a friend
};

// Definition of FriendClass member function
void FriendClass::showDerived(Derived& d) {
    cout << "Base Value: " << d.baseValue << endl;    // Accessing private member of Base
    cout << "Derived Value: " << d.derivedValue << endl;  // Accessing private member of Derived
}

int main() {
    Derived d;
    FriendClass f;
    f.showDerived(d);  // Accessing derived object through friend class
    return 0;
}
