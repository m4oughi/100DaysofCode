#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base::show()\n"; }
    virtual void display() final { std::cout << "Base::display() (final)\n"; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived::show()\n"; }
    // void display() override { std::cout << "Derived::display()\n"; } // Compilation Error: display() is final
};

int main() {
    Derived d;
    d.show();
    d.display();
    return 0;
}
