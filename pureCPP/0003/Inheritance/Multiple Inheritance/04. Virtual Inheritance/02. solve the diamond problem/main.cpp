#include <iostream>

// Virtual base class
class Base {
public:
    Base() {
        std::cout << "Base constructor" << std::endl;
    }
    void display() const {
        std::cout << "Base class display" << std::endl;
    }
};

// Derived class 1 using virtual inheritance
class Derived1 : virtual public Base {
public:
    Derived1() {
        std::cout << "Derived1 constructor" << std::endl;
    }
};

// Derived class 2 using virtual inheritance
class Derived2 : virtual public Base {
public:
    Derived2() {
        std::cout << "Derived2 constructor" << std::endl;
    }
};

// Final derived class
class Final : public Derived1, public Derived2 {
public:
    Final() {
        std::cout << "Final constructor" << std::endl;
    }
};

int main() {
    Final f;
    f.display();  // Output: Base constructor Derived1 constructor Derived2 constructor Final constructor Base class display
    return 0;
}
