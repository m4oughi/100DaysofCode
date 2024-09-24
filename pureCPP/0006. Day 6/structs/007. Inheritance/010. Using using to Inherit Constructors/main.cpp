#include <iostream>

struct Base {
    int x;

    Base(int val) : x(val) {}
};

struct Derived : public Base {
    using Base::Base; // Inherit constructors

    void print() {
        std::cout << "x: " << x << std::endl;
    }
};

int main() {


    return 0;
}