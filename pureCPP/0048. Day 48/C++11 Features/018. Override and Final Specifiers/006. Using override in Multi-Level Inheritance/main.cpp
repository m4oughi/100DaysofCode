#include <iostream>

class Base {
public:
    virtual void info() { std::cout << "Base::info()\n"; }
};

class Derived : public Base {
public:
    void info() override { std::cout << "Derived::info()\n"; }
};

class MoreDerived : public Derived {
public:
    void info() override { std::cout << "MoreDerived::info()\n"; }
};

int main() {
    MoreDerived md;
    md.info();
    return 0;
}
