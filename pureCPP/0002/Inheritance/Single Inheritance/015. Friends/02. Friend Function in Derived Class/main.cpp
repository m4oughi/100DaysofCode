#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int baseValue;
public:
    Base(int val) : baseValue(val) { cout << "Base constructor called." << endl; }
    
    // Friend function declaration
    friend void showValues(const Base& b, const class Derived& d);
};

// Derived class
class Derived : public Base {
private:
    int derivedValue;
public:
    Derived(int bVal, int dVal) : Base(bVal), derivedValue(dVal) {
        cout << "Derived constructor called." << endl;
    }
    
    // Friend function declaration
    friend void showValues(const Base& b, const Derived& d);
};

// Friend function
void showValues(const Base& b, const Derived& d) {
    cout << "Base value: " << b.baseValue << endl;
    cout << "Derived value: " << d.derivedValue << endl;
}

int main() {
    Derived d(10, 20);
    showValues(d, d); // Calls friend function to access private members

    return 0;
}
