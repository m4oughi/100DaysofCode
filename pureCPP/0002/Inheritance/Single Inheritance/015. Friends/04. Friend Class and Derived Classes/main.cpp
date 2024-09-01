#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int baseValue;
protected:
    int protectedValue;
public:
    Base(int bVal, int pVal) : baseValue(bVal), protectedValue(pVal) { cout << "Base constructor called." << endl; }
    
    // Declare FriendClass as a friend
    friend class FriendClass;
};

// Derived class
class Derived : public Base {
private:
    int derivedValue;
public:
    Derived(int bVal, int pVal, int dVal) : Base(bVal, pVal), derivedValue(dVal) {
        cout << "Derived constructor called." << endl;
    }
    
    // Declare FriendClass as a friend
    friend class FriendClass;
};

// Friend class
class FriendClass {
public:
    void displayAll(const Base& b, const Derived& d) {
        // Access private member of Base
        cout << "Base value from FriendClass: " << b.baseValue << endl;
        // Access protected member of Base
        cout << "Protected value from FriendClass: " << b.protectedValue << endl;
        // Access private member of Derived
        cout << "Derived value from FriendClass: " << d.derivedValue << endl;
    }
};

int main() {
    Derived d(10, 20, 30);
    FriendClass fc;
    fc.displayAll(d, d); // Access private and protected members of both Base and Derived

    return 0;
}
