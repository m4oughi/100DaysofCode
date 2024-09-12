#include <iostream>

struct Base {
    virtual void print() const {
        std::cout << "Base class" << std::endl;
    }
};

struct Derived final : public Base { // Cannot be inherited further
    void print() const override {
        std::cout << "Derived class" << std::endl;
    }
};
int main() {


    return 0;
}