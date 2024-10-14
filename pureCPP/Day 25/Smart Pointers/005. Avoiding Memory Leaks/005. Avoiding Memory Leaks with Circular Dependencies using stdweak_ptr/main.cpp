#include <iostream>
#include <memory>

class B;  // Forward declaration

class A {
public:
    std::shared_ptr<B> ptrB;  // Shared pointer to B
    ~A() { std::cout << "Destructor of A called" << std::endl; }
};

class B {
public:
    std::weak_ptr<A> ptrA;  // Weak pointer to A to avoid circular dependency
    ~B() { std::cout << "Destructor of B called" << std::endl; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->ptrB = b;
    b->ptrA = a;  // Using weak_ptr to avoid circular dependency

    // Memory will be automatically deallocated when both shared_ptr go out of scope
    return 0;
}
