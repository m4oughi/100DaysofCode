#include <iostream>

class Base1 {
public:
    Base1() {
        std::cout << "Base1 constructor called" << std::endl;
    }

    ~Base1() {
        std::cout << "Base1 destructor called" << std::endl;
    }
};

class Base2 {
public:
    Base2() {
        std::cout << "Base2 constructor called" << std::endl;
    }

    ~Base2() {
        std::cout << "Base2 destructor called" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        std::cout << "Derived constructor called" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};

int main() {
    Derived obj;
    return 0;
}
