/*
In protected inheritance, all the public and protected members of 
the base class become protected members in the derived class. 
The private members remain inaccessible.
*/

#include <iostream>

// Base class
class Base {
public:
    Base() : publicVar(1), protectedVar(2), privateVar(3) {};

    int publicVar;
    void displayBase();

protected:
    int protectedVar;

private:
    int privateVar;
};

class Derived : protected Base {
public:
    void displayDerived();

protected:
    // pass

private:
    // pass
};

void Base::displayBase() {
    std::cout << "Base class variables:" << std::endl;
    std::cout << "publicVar=" << publicVar << std::endl; // Accessible
    std::cout << "protectedVar=" << protectedVar << std::endl; // Accessible
    std::cout << "PrivateVar=" << privateVar << std::endl << std::endl; // Accessible
};

void Derived::displayDerived() {
    std::cout << "Derived class variables:" << std::endl;
    std::cout << "publicVar=" << publicVar << std::endl; // Accessible
    std::cout << "protectedVar=" << protectedVar << std::endl << std::endl; // Accessible
    // std::cout << "PrivateVar=" << privateVar << std::endl; // Error: It couldn't inherit the private variables.
};


int main() {
    Base b;
    Derived d;
    b.displayBase(); // Accessible
    // d.displayBase(); // Inaccessible
    d.displayDerived(); // Accessible

    std::cout << b.publicVar << std::endl; // Accessible
    // std::cout << b.protectedVar; // Inaccessible
    // std::cout << b.privateVar << std::endl; // Inaccessible

    // std::cout << "Direct access - publicVar: " << d.publicVar << std::endl; // Inaccessible
    //std::cout << d.protectedVar; // Inaccessible
    //std::cout << d.privateVar << std::endl; // Inaccessible
};