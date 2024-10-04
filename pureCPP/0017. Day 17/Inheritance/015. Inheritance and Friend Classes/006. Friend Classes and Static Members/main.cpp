#include <iostream>
using namespace std;

// Forward declaration
class Derived;

// Friend class
class FriendClass {
public:
    void showStaticValue();  // Declaration of a member function
};

// Base class
class Base {
protected:
    static int staticBaseValue;  // Static member

public:
    static void setStaticBaseValue(int value) {
        staticBaseValue = value;  // Setter for static member
    }
};

int Base::staticBaseValue = 0;  // Initialize static member

// Derived class
class Derived : public Base {
private:
    static int staticDerivedValue;  // Static member

public:
    static void setStaticDerivedValue(int value) {
        staticDerivedValue = value;  // Setter for static member
    }
    friend class FriendClass;  // Declaring FriendClass as a friend
};

int Derived::staticDerivedValue = 0;  // Initialize static member

// Definition of FriendClass member function
void FriendClass::showStaticValue() {
    cout << "Base Static Value: " << Base::staticBaseValue << endl;    // Accessing static member of Base
    cout << "Derived Static Value: " << Derived::staticDerivedValue << endl;  // Accessing static member of Derived
}

int main() {
    Base::setStaticBaseValue(100);
    Derived::setStaticDerivedValue(200);

    FriendClass f;
    f.showStaticValue();  // Accessing static members through friend class
    return 0;
}
