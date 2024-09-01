#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int baseValue;
    Base(int val) : baseValue(val) { cout << "Base constructor called with value: " << baseValue << endl; }
    void display() { cout << "Base class display() with value: " << baseValue << endl; }
};

// Intermediate classes inheriting from Base using virtual inheritance
class Derived1 : virtual public Base {
public:
    Derived1(int val) : Base(val) { cout << "Derived1 constructor called." << endl; }
};

class Derived2 : virtual public Base {
public:
    Derived2(int val) : Base(val) { cout << "Derived2 constructor called." << endl; }
};

// Class inheriting from both Derived1 and Derived2
class Final : public Derived1, public Derived2 {
public:
    Final(int val) : Base(val), Derived1(val), Derived2(val) {
        cout << "Final constructor called." << endl;
    }
    void show() {
        display(); // No ambiguity, single instance of Base
    }
};

int main() {
    Final obj(10); // Initialize Base with value 10
    obj.show();    // Calls display() from Base

    return 0;
}
