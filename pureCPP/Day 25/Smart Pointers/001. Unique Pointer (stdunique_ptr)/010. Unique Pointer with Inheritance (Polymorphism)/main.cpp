#include <iostream>
#include <memory>

class Base {
public:
    virtual void show() const {
        std::cout << "Base class" << std::endl;
    }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void show() const override {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    std::unique_ptr<Base> ptr = std::make_unique<Derived>();  // Polymorphic behavior
    ptr->show();  // Calls Derived class's show()

    return 0;
}
