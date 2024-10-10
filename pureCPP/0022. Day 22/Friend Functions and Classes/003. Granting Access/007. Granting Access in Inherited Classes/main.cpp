#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;

public:
    Base(int v) : baseValue(v) {}

    // Granting access to this function
    friend void showValues(Base&, Derived&);
};

class Derived : public Base {
private:
    int derivedValue;

public:
    Derived(int bValue, int dValue) : Base(bValue), derivedValue(dValue) {}

    // Granting access to the same function
    friend void showValues(Base&, Derived&);
};

// Friend function accessing both base and derived class private members
void showValues(Base& baseObj, Derived& derivedObj) {
    cout << "Base Value: " << baseObj.baseValue << endl;    // Accessing private member of Base
    cout << "Derived Value: " << derivedObj.derivedValue << endl;  // Accessing private member of Derived
}

int main() {
    Base base(100);
    Derived derived(100, 200);
    showValues(base, derived);  // Friend function accessing both base and derived class members
    return 0;
}
