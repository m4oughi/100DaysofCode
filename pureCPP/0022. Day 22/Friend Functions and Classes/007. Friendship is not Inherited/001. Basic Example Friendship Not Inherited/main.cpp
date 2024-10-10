#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;

public:
    Base(int val) : baseValue(val) {}

    // Declaring Friend Function for Base Class
    friend void showBaseValue(Base&);
};

class Derived : public Base {
private:
    int derivedValue;

public:
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {}

    // No friendship extended to the derived class
};

// Friend function for the Base class
void showBaseValue(Base& b) {
    cout << "Base Value: " << b.baseValue << endl;  // Accessing private member of Base
}

int main() {
    Base baseObj(10);
    Derived derivedObj(20, 30);

    showBaseValue(baseObj);  // Works: Base is a friend of the function
    // showBaseValue(derivedObj);  // Error: Derived does not inherit friendship

    return 0;
}
