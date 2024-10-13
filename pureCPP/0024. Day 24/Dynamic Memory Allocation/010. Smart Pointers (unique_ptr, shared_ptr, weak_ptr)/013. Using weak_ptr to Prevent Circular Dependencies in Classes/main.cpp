#include <iostream>
#include <memory>

class B; // forward declaration

class A {
public:
    std::shared_ptr<B> bPtr;
    ~A() {
        std::cout << "A destroyed" << std::endl;
    }
};

class B {
public:
    std::weak_ptr<A> aPtr; // use weak_ptr to break circular reference
    ~B() {
        std::cout << "B destroyed" << std::endl;
    }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->bPtr = b; // A holds shared_ptr to B
    b->aPtr = a; // B holds weak_ptr to A

    return 0; // Both objects are properly deleted
}
