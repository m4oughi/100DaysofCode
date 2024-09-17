#include <iostream>

class Base {
public:
    virtual void process() const {
        std::cout << "Base process." << std::endl;
    }
};

class Derived1 : public Base {
public:
    void process() const override {
        std::cout << "Derived1 process." << std::endl;
    }
};

class Derived2 : public Derived1 {
public:
    void process() const override {
        std::cout << "Derived2 process." << std::endl;
    }
};

int main() {
    Base* obj = new Derived2();

    obj->process();  // Calls Derived2's process()

    delete obj;
    return 0;
}
