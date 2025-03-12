#include <iostream>

class AbstractBase {
public:
    virtual void show() = 0; // Pure virtual function
};

class Derived : public AbstractBase {
public:
    void show() override { std::cout << "Derived::show()\n"; }
};

int main() {
    // AbstractBase ab; // Compilation Error: Cannot instantiate abstract class
    Derived d;
    d.show();
    return 0;
}
