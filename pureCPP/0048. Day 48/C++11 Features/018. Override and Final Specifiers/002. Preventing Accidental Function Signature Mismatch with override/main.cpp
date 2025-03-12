#include <iostream>

class Base {
public:
    virtual void display(int x) { std::cout << "Base::display(int)\n"; }
};

class Derived : public Base {
public:
    // void display() override { std::cout << "Derived::display()\n"; } // Compilation Error: No matching base function
    void display(int x) override { std::cout << "Derived::display(int)\n"; }
};

int main() {
    Derived d;
    d.display(5);
    return 0;
}
