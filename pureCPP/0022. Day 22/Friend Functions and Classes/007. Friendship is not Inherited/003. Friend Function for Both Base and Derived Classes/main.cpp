#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;

public:
    Base(int val) : baseValue(val) {}

    // Friend function for Base class
    friend void showBase(Base&);
};

class Derived : public Base {
private:
    int derivedValue;

public:
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {}

    // Separate friend function for Derived class
    friend void showDerived(Derived&);
};

// Friend function accessing private members of Base class
void showBase(Base& b) {
    cout << "Base Value: " << b.baseValue << endl;
}

// Friend function accessing private members of Derived class
void showDerived(Derived& d) {
    showBase(d);  // Calling base class friend function
    cout << "Derived Value: " << d.derivedValue << endl;
}

int main() {
    Derived obj(20, 30);

    // Can access both Base and Derived members
    showDerived(obj);

    return 0;
}
