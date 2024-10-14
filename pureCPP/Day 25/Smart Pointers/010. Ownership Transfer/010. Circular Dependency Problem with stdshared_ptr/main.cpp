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
    std::shared_ptr<A> aPtr;
    ~B() { std::cout << "B destroyed" << std::endl; }
};

int main() {
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();

    a->bPtr = b;  // A owns B
    b->aPtr = a;  // B owns A

    // Circular dependency causes memory leak, as neither A nor B will be destroyed

    return 0;
}
