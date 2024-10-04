#include <iostream>
using namespace std;

// Forward declarations
class FriendClass1;
class FriendClass2;

// Base class
class Base {
protected:
    int baseValue;

public:
    Base() : baseValue(30) {}  // Constructor
    friend class FriendClass1;  // Declaring FriendClass1 as a friend
    friend class FriendClass2;  // Declaring FriendClass2 as a friend
};

// Derived class
class Derived : public Base {
private:
    int derivedValue;

public:
    Derived() : derivedValue(40) {}  // Constructor
    friend class FriendClass1;  // Declaring FriendClass1 as a friend
    friend class FriendClass2;  // Declaring FriendClass2 as a friend
};

// FriendClass1 definition
class FriendClass1 {
public:
    void showDerived(Derived& d) {
        cout << "FriendClass1 accessing: " << endl;
        cout << "Base Value: " << d.baseValue << endl;    // Accessing protected member of Base
        cout << "Derived Value: " << d.derivedValue << endl;  // Accessing private member of Derived
    }
};

// FriendClass2 definition
class FriendClass2 {
public:
    void showDerived(Derived& d) {
        cout << "FriendClass2 accessing: " << endl;
        cout << "Base Value: " << d.baseValue << endl;    // Accessing protected member of Base
        cout << "Derived Value: " << d.derivedValue << endl;  // Accessing private member of Derived
    }
};

int main() {
    Derived d;
    FriendClass1 f1;
    FriendClass2 f2;

    f1.showDerived(d);  // Accessing derived object through FriendClass1
    f2.showDerived(d);  // Accessing derived object through FriendClass2

    return 0;
}
