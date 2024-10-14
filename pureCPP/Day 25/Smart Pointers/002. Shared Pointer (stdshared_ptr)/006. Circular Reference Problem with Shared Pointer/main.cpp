#include <iostream>
#include <memory>

class B;  // Forward declaration

class A {
public:
    std::shared_ptr<B> ptrB;
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

    ptrA->ptrB = ptrB;  // Circular reference
    ptrB->ptrA = ptrA;  // Circular reference

    std::cout << "End of main function" << std::endl;
    return 0;
}
