#include <iostream>

class Base {
public:
    // Virtual inline function
    virtual inline void display() const {
        std::cout << "Base Display" << std::endl;
    }
};

class Derived : public Base {
public:
    // Overridden inline function
    inline void display() const override {
        std::cout << "Derived Display" << std::endl;
    }
};

int main() {
    Base *base = new Derived();
    base->display(); // Output: Derived Display
    delete base;
    return 0;
}
