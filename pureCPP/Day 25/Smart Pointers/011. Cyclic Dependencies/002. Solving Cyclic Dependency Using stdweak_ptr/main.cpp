#include <iostream>
#include <memory>

class A;  // Forward declaration

class B {
public:
    std::weak_ptr<A> aPtr;  // B holds a weak_ptr to A to break the cycle
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

    a->bPtr = b;  // A owns B
    b->aPtr = a;  // B has a weak reference to A (no ownership)

    // Memory is properly released; no leak
    return 0;
}
