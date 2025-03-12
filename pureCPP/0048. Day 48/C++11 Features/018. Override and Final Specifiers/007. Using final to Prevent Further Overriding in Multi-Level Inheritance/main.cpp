#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base::show()\n"; }
};

class Derived : public Base {
public:
    void show() final { std::cout << "Derived::show()\n"; } // Cannot be overridden further
};

class MoreDerived : public Derived {
public:
    // void show() override { std::cout << "MoreDerived::show()\n"; } // Compilation Error: show() is final
};

int main() {
    Derived d;
    d.show();
    return 0;
}
