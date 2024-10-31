#include <iostream>

class Base {
public:
    Base() { std::cout << "Base class constructor" << std::endl; }
    virtual ~Base() { std::cout << "Base class destructor (unwinding)" << std::endl; }
};

class Derived : public Base {
public:
    Derived() { std::cout << "Derived class constructor" << std::endl; }
    ~Derived() { std::cout << "Derived class destructor (unwinding)" << std::endl; }
};

int main() {
    try {
        Derived obj;
        throw std::runtime_error("Exception thrown");
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
