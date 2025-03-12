#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base::show()\n"; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived::show()\n"; }
};

int main() {
    Derived d;
    d.show(); // Calls Derived::show()
    return 0;
}
