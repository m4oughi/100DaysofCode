#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;

public:
    Base(int val) : baseValue(val) {}

    // Friend function declaration for the Base class
    friend void showBaseValue(Base&);
};

class Derived : public Base {
private:
    int derivedValue;

public:
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {}

    // Derived class does not have a friend function
};

// Friend function defined for Base class
void showBaseValue(Base& b) {
    cout << "Base value: " << b.baseValue << endl;
}

int main() {
    Base baseObj(10);
    Derived derivedObj(20, 30);

    showBaseValue(baseObj);   // Accesses Base's private member
    // showBaseValue(derivedObj);  // Error: Friendship is not inherited by Derived class

    return 0;
}
