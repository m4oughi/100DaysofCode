#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;

public:
    Base(int value) : baseValue(value) {}

    // Declare FriendClass as a friend class
    friend class FriendClass;
};

class Derived : public Base {
private:
    int derivedValue;

public:
    Derived(int bValue, int dValue) : Base(bValue), derivedValue(dValue) {}

    // Friend class declaration
    friend class FriendClass;
};

class FriendClass {
public:
    void display(Base& baseObj, Derived& derivedObj) {
        cout << "Base Value: " << baseObj.baseValue << endl;   // Accessing private member of Base
        cout << "Derived Value: " << derivedObj.derivedValue << endl; // Accessing private member of Derived
    }
};

int main() {
    Base baseObj(100);
    Derived derivedObj(100, 200);
    FriendClass friendObj;
    friendObj.display(baseObj, derivedObj);  // Friend class accessing both base and derived class members
    return 0;
}
