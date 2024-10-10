#include <iostream>
using namespace std;

class Base {
private:
    int privateValue;  // Encapsulated private member

protected:
    int protectedValue;  // Encapsulated protected member

public:
    Base(int priv, int prot) : privateValue(priv), protectedValue(prot) {}

    // Friend function declaration
    friend void displayValues(Base&);
};

// Friend function accessing both private and protected members
void displayValues(Base& base) {
    cout << "Private Value: " << base.privateValue << endl;
    cout << "Protected Value: " << base.protectedValue << endl;
}

class Derived : public Base {
public:
    Derived(int priv, int prot) : Base(priv, prot) {}
};

int main() {
    Derived derived(10, 20);
    displayValues(derived);  // Friend function accessing encapsulated data
    return 0;
}
