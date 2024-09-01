#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() { cout << "Base constructor called." << endl; }
    void display() { cout << "Base class display()" << endl; }
};

// Intermediate classes inheriting from Base using virtual inheritance
class Derived1 : virtual public Base {
public:
    Derived1() { cout << "Derived1 constructor called." << endl; }
};

class Derived2 : virtual public Base {
public:
    Derived2() { cout << "Derived2 constructor called." << endl; }
};

// Class inheriting from both Derived1 and Derived2
class Final : public Derived1, public Derived2 {
public:
    Final() { cout << "Final constructor called." << endl; }
    void show() {
        display(); // No ambiguity, single instance of Base
    }
};

int main() {
    Final obj;
    obj.show(); // Calls display() from Base

    return 0;
}
