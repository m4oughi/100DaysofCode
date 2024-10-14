#include <iostream>
#include <memory>

class B;  // Forward declaration

class A {
public:
    std::shared_ptr<B> bPtr;
    ~A() { std::cout << "A destroyed" << std::endl; }
};

class B {
public:
    std::weak_ptr<A> aPtr;  // Use weak_ptr to avoid circular reference
    ~B() { std::cout << "B destroyed" << std::endl; }
};

int main() {
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();

    a->bPtr = b;  // A owns B
    b->aPtr = a;  // B has a weak reference to A, avoiding circular dependency

    return 0;
}
