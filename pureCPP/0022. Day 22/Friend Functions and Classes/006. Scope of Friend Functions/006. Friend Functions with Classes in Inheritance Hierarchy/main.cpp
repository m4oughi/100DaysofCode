#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;  // Private member in base class

public:
    Base(int value) : baseValue(value) {}

    // Friend function declaration
    friend int accessValues(Base&, Derived&);
};

class Derived : public Base {
private:
    int derivedValue;  // Private member in derived class

public:
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {}

    // Friend function declaration (inherited from base class)
    friend int accessValues(Base&, Derived&);
};

// Friend function accessing private members of both base and derived class
int accessValues(Base& b, Derived& d) {
    return b.baseValue + d.derivedValue;  // Accessing private members of base and derived class
}

int main() {
    Base base(10);
    Derived derived(10, 20);
    cout << "Sum of base and derived values: " << accessValues(base, derived) << endl;
    return 0;
}
