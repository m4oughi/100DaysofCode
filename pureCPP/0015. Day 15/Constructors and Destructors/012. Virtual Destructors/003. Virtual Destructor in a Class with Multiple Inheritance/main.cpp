#include <iostream>

class Base1 {
public:
    Base1() {
        std::cout << "Base1 constructor called." << std::endl;
    }

    virtual ~Base1() {
        std::cout << "Base1 destructor called." << std::endl;
    }
};

class Base2 {
public:
    Base2() {
        std::cout << "Base2 constructor called." << std::endl;
    }

    virtual ~Base2() {
        std::cout << "Base2 destructor called." << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    Base1* ptr = new Derived();
    delete ptr;  // Calls Derived destructor, Base1 and Base2 destructors
    return 0;
}
