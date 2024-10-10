#include <iostream>
using namespace std;

class Base {
private:
    int baseValue;

public:
    Base() : baseValue(100) {}

    // Friend function declaration
    friend void showBaseValue(Base& baseObj);
};

class Derived : public Base {
private:
    int derivedValue;

public:
    Derived() : derivedValue(200) {}

    // Friend function declaration
    friend void showDerivedValue(Derived& derivedObj);
};

void showBaseValue(Base& baseObj) {
    cout << "Base Value: " << baseObj.baseValue << endl;
}

void showDerivedValue(Derived& derivedObj) {
    cout << "Derived Value: " << derivedObj.derivedValue << endl;
}

int main() {
    Base base;
    Derived derived;
    
    showBaseValue(base);      // Friend function accessing base class private member
    showDerivedValue(derived); // Friend function accessing derived class private member
    return 0;
}
