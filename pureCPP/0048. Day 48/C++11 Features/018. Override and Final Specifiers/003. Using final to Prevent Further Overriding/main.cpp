#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base::show()\n"; }
};

class Derived final : public Base {  // Cannot be further inherited
public:
    void show() override { std::cout << "Derived::show()\n"; }
};

// class MoreDerived : public Derived {}; // Compilation Error: Derived is final

int main() {
    Derived d;
    d.show();
    return 0;
}
