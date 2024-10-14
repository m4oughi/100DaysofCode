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
    std::weak_ptr<A> ptrA;  // Weak pointer avoids circular dependency
    ~B() { std::cout << "Destructor of B called" << std::endl; }
};

int main() {
    std::shared_ptr<A> ptrA = std::make_shared<A>();
    std::shared_ptr<B> ptrB = std::make_shared<B>();

    ptrA->ptrB = ptrB;  // A owns B
    ptrB->ptrA = ptrA;  // B holds a weak reference to A

    std::cout << "End of main function" << std::endl;
    return 0;
}
