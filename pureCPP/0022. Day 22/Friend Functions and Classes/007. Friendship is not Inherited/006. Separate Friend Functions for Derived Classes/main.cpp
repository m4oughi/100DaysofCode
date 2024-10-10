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

    // Friend function for Derived class
    friend void showDerived(Derived&);
};

// Friend function accessing Base's private member
void showBase(Base& b) {
    cout << "Base Value: " << b.baseValue << endl;
}

// Friend function accessing Derived's private member
void showDerived(Derived& d) {
    showBase(d);  // Accessing Base private member
    cout << "Derived Value: " << d.derivedValue << endl;
}

int main() {
    Derived d(10, 20);

    showBase(d);    // Works for Base class
    showDerived(d);  // Works for Derived class

    return 0;
}
