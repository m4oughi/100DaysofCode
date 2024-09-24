#include <iostream>

class Base {
public:
    virtual void display() {
        std::cout << "Base class display function." << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class display function." << std::endl;
    }
};

int main() {
    Base* obj = new Derived();
    obj->display();  // Calls Derived's display() due to polymorphism

    delete obj;
    return 0;
}
