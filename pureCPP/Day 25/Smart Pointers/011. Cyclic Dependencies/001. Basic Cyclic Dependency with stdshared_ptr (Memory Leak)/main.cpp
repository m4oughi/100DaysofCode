#include <iostream>
#include <memory>

class A;  // Forward declaration

class B {
public:
    std::shared_ptr<A> aPtr;  // B holds a shared_ptr to A
    ~B() { std::cout << "B destroyed" << std::endl; }
};

class A {
public:
    std::shared_ptr<B> bPtr;  // A holds a shared_ptr to B
    ~A() { std::cout << "A destroyed" << std::endl; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->bPtr = b;  // A points to B
    b->aPtr = a;  // B points to A

    // Memory leak: neither A nor B will be destroyed
    return 0;
}
