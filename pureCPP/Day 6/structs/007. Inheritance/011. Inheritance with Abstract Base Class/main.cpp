#include <iostream>

struct Base {
    virtual void print() const = 0; // Pure virtual function
};

struct Derived : public Base {
    void print() const override {
        std::cout << "Derived class implementation" << std::endl;
    }
};

int main() {


    return 0;
}