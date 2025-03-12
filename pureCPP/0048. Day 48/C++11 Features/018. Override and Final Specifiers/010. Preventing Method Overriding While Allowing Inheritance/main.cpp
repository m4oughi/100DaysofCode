#include <iostream>

class Base {
public:
    virtual void show() final { std::cout << "Base::show()\n"; } // Cannot be overridden
};

class Derived : public Base {
    // void show() override { std::cout << "Derived::show()\n"; } // Compilation Error
};

class MoreDerived : public Derived {}; // Can still inherit

int main() {
    MoreDerived md;
    md.show(); // Calls Base::show()
    return 0;
}
