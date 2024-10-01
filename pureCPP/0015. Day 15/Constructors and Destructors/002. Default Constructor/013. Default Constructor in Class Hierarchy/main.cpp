#include <iostream>

class Base1 {
public:
    // Default constructor
    Base1() {
        std::cout << "Base1 default constructor called" << std::endl;
    }
};

class Base2 {
public:
    // Default constructor
    Base2() {
        std::cout << "Base2 default constructor called" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    // Default constructor
    Derived() {
        std::cout << "Derived default constructor called" << std::endl;
    }
};

int main() {
    Derived obj;  // Calls the default constructors of both base classes and the derived class
    return 0;
}
