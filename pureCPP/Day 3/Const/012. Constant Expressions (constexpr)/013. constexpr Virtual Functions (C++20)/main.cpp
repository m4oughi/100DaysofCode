#include <iostream>

struct Base {
    virtual constexpr int value() const {
        return 1;
    }
};

struct Derived : public Base {
    constexpr int value() const override {
        return 2;
    }
};

int main() {
    constexpr Derived d;
    constexpr int val = d.value(); // Compile-time evaluation of the overridden function
    std::cout << val << std::endl; // Prints 2
}
