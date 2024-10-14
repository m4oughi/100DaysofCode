#include <iostream>
#include <memory>

class B;  // Forward declaration

class A {
public:
    std::weak_ptr<B> ptrB;  // Weak reference to avoid circular dependency
    ~A() { std::cout << "Destructor of A called" << std::endl; }
};

class B {
public:
    std::shared_ptr<A> ptrA;
    ~B() { std::cout << "Destructor of B called" << std::endl; }
};

int main() {
    std::shared_ptr<A> ptrA = std::make_shared<A>();
    std::shared_ptr<B> ptrB = std::make_shared<B>();

    ptrA->ptrB = ptrB;  // No circular dependency, ptrB is a weak_ptr in A
    ptrB->ptrA = ptrA;  // Shared ownership in B

    std::cout << "End of main function" << std::endl;
    return 0;
}
