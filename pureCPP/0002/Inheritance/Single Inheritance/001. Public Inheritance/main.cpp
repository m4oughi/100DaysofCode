/*
In public inheritance, all the public members of the base class become 
public members of the derived class, and all the protected members of 
the base class become protected members of the derived class. 
The private members of the base class remain inaccessible directly from the derived class.
*/
#include <iostream>

// Base class
class Base {
public:
    Base() : publicVar(1), protectedVar(2), privateVar(3) {};

    int publicVar;
    void displayBase() const = 0;

protected:
    int protectedVar;

private:
    int privateVar;
};

class Derived : public Base {
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
    // std::cout << "PrivateVar=" << privateVar << std::endl; // Inaccessible
};

int main() {
    Base b;
    Derived d;
	
    b.displayBase(); // Accessible
    d.displayBase(); // Accessible
    d.displayDerived(); // Accessible

    std::cout << b.publicVar << std::endl; // Accessible
    // std::cout << b.protectedVar << std::endl; // Inaccessible
    // std::cout << b.privateVar << std::endl; // Inaccessible

    std::cout << "Direct access - publicVar: " << d.publicVar << std::endl; // Accessible
    //std::cout << d.protectedVar << std::endl; // Inaccessible
    //std::cout << d.privateVar << std::endl; // Inaccessible
}