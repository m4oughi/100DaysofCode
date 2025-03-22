#include <iostream>
#include <memory>

struct Base {
    virtual ~Base() { std::cout << "Base destructor\n"; }
};

struct Derived : public Base {
    ~Derived() { std::cout << "Derived destructor\n"; }
};

int main() {
    std::shared_ptr<Base> ptr = std::make_shared<Derived>(); // Polymorphism

    std::cout << "Use count: " << ptr.use_count() << '\n';
    return 0;
}
