#include <iostream>
using namespace std;

class Base {
protected:
    int protectedValue;

private:
    int privateValue;

public:
    Base(int pValue, int prValue) : protectedValue(pValue), privateValue(prValue) {}

    // Declare a friend function
    friend void displayValues(Base&);
};

class Derived : public Base {
public:
    Derived(int pValue, int prValue) : Base(pValue, prValue) {}

    void showProtectedValue() {
        cout << "Protected Value: " << protectedValue << endl;  // Direct access to protected member
    }
};

// Friend function accessing both private and protected members
void displayValues(Base& obj) {
    cout << "Private Value: " << obj.privateValue << endl;
    cout << "Protected Value: " << obj.protectedValue << endl;
}

int main() {
    Derived derivedObj(10, 20);
    derivedObj.showProtectedValue();  // Accessing protected member in derived class
    displayValues(derivedObj);  // Friend function accessing both private and protected members
    return 0;
}
