#include <iostream>
using namespace std;

// Forward declarations
class FriendClass;

// Base class A
class BaseA {
protected:
    int valueA;

public:
    BaseA() : valueA(70) {}  // Constructor
};

// Base class B
class BaseB {
protected:
    int valueB;

public:
    BaseB() : valueB(80) {}  // Constructor
};

// Derived class
class Derived : public BaseA, public BaseB {
private:
    int derivedValue;

public:
    Derived() : derivedValue(90) {}  // Constructor
    friend class FriendClass;  // Declaring FriendClass as a friend
};

// Friend class
class FriendClass {
public:
    void showValues(Derived& d) {
        cout << "Value from BaseA: " << d.valueA << endl;  // Accessing protected member of BaseA
        cout << "Value from BaseB: " << d.valueB << endl;  // Accessing protected member of BaseB
        cout << "Derived Value: " << d.derivedValue << endl;  // Accessing private member of Derived
    }
};

int main() {
    Derived d;
    FriendClass f;
    f.showValues(d);  // Accessing derived object through friend class
    return 0;
}
