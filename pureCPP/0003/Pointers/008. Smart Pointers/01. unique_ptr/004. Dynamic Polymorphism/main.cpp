#include <iostream>
#include <memory>

// Base class
class Base {
public:
    virtual void show() {
        std::cout << "Base class show function." << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show function." << std::endl;
    }
};

int main() {
    // Create a unique_ptr to a Derived object but manage it as a Base pointer
    std::unique_ptr<Base> ptr = std::make_unique<Derived>();

    // Call the overridden function
    ptr->show();  // Output: Derived class show function.

    // No need to explicitly delete the object; it is automatically managed by unique_ptr

    return 0;
}
