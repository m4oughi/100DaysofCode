#include <iostream>
#include <memory>

class B;  // Forward declaration

class A {
public:
    std::weak_ptr<B> ptrToB;  // Weak pointer to prevent cyclic dependency
    ~A() { std::cout << "A destroyed!" << std::endl; }
};

class B {
public:
    std::shared_ptr<A> ptrToA;
    ~B() { std::cout << "B destroyed!" << std::endl; }
};

int main() {
    std::shared_ptr<A> aPtr = std::make_shared<A>();
    std::shared_ptr<B> bPtr = std::make_shared<B>();

    aPtr->ptrToB = bPtr;
    bPtr->ptrToA = aPtr;

    // Objects will be destroyed properly, no memory leak
    return 0;
}
