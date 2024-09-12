#include <iostream>

struct Base {
    virtual void display() const = 0; // Pure virtual function
};

struct Derived1 : virtual public Base {
    void display() const override {
        std::cout << "Derived1 Display" << std::endl;
    }
};

struct Derived2 : virtual public Base {
    void display() const override {
        std::cout << "Derived2 Display" << std::endl;
    }
};

struct Final : public Derived1, public Derived2 {};

int main() {


    return 0;
}