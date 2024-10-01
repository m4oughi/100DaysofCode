#include <iostream>

class Base {
public:
    Base(int x) {
        std::cout << "Base constructor called with value: " << x << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived(int x) : Base(x) {
        std::cout << "Derived constructor called with value: " << x << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};

int main() {
    Derived obj(42);
    return 0;
}
