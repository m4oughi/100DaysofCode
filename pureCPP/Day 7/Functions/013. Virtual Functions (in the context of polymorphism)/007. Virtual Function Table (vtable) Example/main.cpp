#include <iostream>

class Base {
public:
    virtual void speak() const {
        std::cout << "Base speaking." << std::endl;
    }
};

class Derived : public Base {
public:
    void speak() const override {
        std::cout << "Derived speaking." << std::endl;
    }
};

int main() {
    Base* obj = new Derived();

    obj->speak();  // Calls Derived's speak() due to vtable lookup

    delete obj;
    return 0;
}
