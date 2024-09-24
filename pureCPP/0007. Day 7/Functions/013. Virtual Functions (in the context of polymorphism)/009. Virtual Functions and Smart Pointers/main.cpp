#include <iostream>
#include <memory>

class Base {
public:
    virtual void display() const {
        std::cout << "Base display." << std::endl;
    }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void display() const override {
        std::cout << "Derived display." << std::endl;
    }
};

int main() {
    std::unique_ptr<Base> obj = std::make_unique<Derived>();

    obj->display();  // Calls Derived's display() through smart pointer

    return 0;
}
