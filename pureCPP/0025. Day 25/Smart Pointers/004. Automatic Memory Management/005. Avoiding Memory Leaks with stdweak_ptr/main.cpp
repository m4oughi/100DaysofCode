#include <iostream>
#include <memory>

class A;
class B;

class A {
public:
    std::shared_ptr<B> ptrB;
    ~A() { std::cout << "Destructor of A called" << std::endl; }
};

class B {
public:
    std::weak_ptr<A> ptrA;  // Weak pointer to avoid circular dependency
    ~B() { std::cout << "Destructor of B called" << std::endl; }
};

int main() {
    std::shared_ptr<A> ptrA = std::make_shared<A>();
    std::shared_ptr<B> ptrB = std::make_shared<B>();

    ptrA->ptrB = ptrB;  // A owns B
    ptrB->ptrA = ptrA;  // B holds a weak_ptr to A, avoiding circular dependency

    // Memory will be automatically deallocated when both go out of scope
    return 0;
}
