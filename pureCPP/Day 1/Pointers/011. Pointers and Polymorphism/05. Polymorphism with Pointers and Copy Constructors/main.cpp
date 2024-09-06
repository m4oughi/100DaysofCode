#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class show" << std::endl;
    }

    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show" << std::endl;
    }
};

void demonstrate(Base* b) {  // Function taking a pointer to base class
    b->show();  // Polymorphic behavior
}

int main() {
    Base* b = new Derived();
    demonstrate(b);  // Output: Derived class show

    delete b;
    return 0;
}
