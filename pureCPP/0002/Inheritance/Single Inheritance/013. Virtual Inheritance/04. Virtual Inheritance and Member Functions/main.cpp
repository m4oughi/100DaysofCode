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
    void derived1Method() { cout << "Derived1 method." << endl; }
};

class Derived2 : virtual public Base {
public:
    Derived2(int val) : Base(val) { cout << "Derived2 constructor called." << endl; }
    void derived2Method() { cout << "Derived2 method." << endl; }
};

// Class inheriting from both Derived1 and Derived2
class Final : public Derived1, public Derived2 {
public:
    Final(int val) : Base(val), Derived1(val), Derived2(val) {
        cout << "Final constructor called." << endl;
    }
    void show() {
        display();        // Calls display() from Base
        derived1Method(); // Calls method from Derived1
        derived2Method(); // Calls method from Derived2
    }
};

int main() {
    Final obj(42); // Initialize Base with value 42
    obj.show();    // Calls display() and methods from Derived1 and Derived2

    return 0;
}
