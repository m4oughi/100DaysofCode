#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() { cout << "Base constructor called." << endl; }
    void display() { cout << "Base class display()" << endl; }
};

// Intermediate classes inheriting from Base
class Derived1 : public Base {
public:
    Derived1() { cout << "Derived1 constructor called." << endl; }
};

class Derived2 : public Base {
public:
    Derived2() { cout << "Derived2 constructor called." << endl; }
};

// Class inheriting from both Derived1 and Derived2
class Final : public Derived1, public Derived2 {
public:
    Final() { cout << "Final constructor called." << endl; }
    void show() {
        // Calls display() from Base; ambiguous due to diamond problem
        // display(); // Error: request for member 'display' is ambiguous
    }
};

int main() {
    Final obj;
    // obj.display(); // Error: request for member 'display' is ambiguous
    return 0;
}
