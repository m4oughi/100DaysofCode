#include <iostream>

class Base {
public:
    virtual inline void display() {
        std::cout << "Base class display" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class display" << std::endl;
    }
};

int main() {
    Base* b = new Derived();
    b->display();  // Calls derived class version
    delete b;
    return 0;
}
