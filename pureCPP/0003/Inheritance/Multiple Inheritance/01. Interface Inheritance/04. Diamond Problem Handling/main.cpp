#include <iostream>

// Base interface
class Base {
public:
    virtual void print() const = 0;  // Pure virtual function
};

// Derived interfaces
class A : virtual public Base {
public:
    void print() const override {
        std::cout << "Class A" << std::endl;
    }
};

class B : virtual public Base {
public:
    void print() const override {
        std::cout << "Class B" << std::endl;
    }
};

// Combined class
class C : public A, public B {
public:
    void print() const override {
        std::cout << "Class C" << std::endl;
    }
};

int main() {
    C c;
    c.print();  // Output will be "Class C"
    return 0;
}
