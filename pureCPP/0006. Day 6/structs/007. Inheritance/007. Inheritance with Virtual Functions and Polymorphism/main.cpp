#include <iostream>

struct Base {
    virtual void print() const {
        std::cout << "Base class" << std::endl;
    }
};

struct Derived : public Base {
    void print() const override {
        std::cout << "Derived class" << std::endl;
    }
};

void show(Base* base) {
    base->print(); // Demonstrates polymorphism
}


int main() {


    return 0;
}