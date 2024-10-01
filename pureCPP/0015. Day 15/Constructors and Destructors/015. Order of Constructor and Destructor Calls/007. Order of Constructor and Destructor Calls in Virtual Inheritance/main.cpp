#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1() {
        std::cout << "Derived1 constructor called." << std::endl;
    }

    ~Derived1() {
        std::cout << "Derived1 destructor called." << std::endl;
    }
};

class Derived2 : virtual public Base {
public:
    Derived2() {
        std::cout << "Derived2 constructor called." << std::endl;
    }

    ~Derived2() {
        std::cout << "Derived2 destructor called." << std::endl;
    }
};

class Final : public Derived1, public Derived2 {
public:
    Final() {
        std::cout << "Final constructor called." << std::endl;
    }

    ~Final() {
        std::cout << "Final destructor called." << std::endl;
    }
};

int main() {
    Final obj;
    return 0;
}
